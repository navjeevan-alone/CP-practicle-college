#include <iostream>
#include <string>
using namespace std;
class Node
{
public:
    int registrationNumber;
    string name;
    Node *next;

    Node(int regNo, const string &studentName) : registrationNumber(regNo), name(studentName), next(nullptr) {}
};

class ClubList
{
private:
    Node *head;

public:
    ClubList() : head(nullptr) {}

    void addMember(int regNo, const string &studentName)
    {
        Node *newNode = new Node(regNo, studentName);
        newNode->next = head;
        head = newNode;
    }

    void deleteMember(int regNo)
    {
        Node *current = head;
        Node *prev = nullptr;

        while (current != nullptr && current->registrationNumber != regNo)
        {
            prev = current;
            current = current->next;
        }

        if (current == nullptr)
        {
            cout << "Member with registration number " << regNo << " not found." << endl;
            return;
        }

        if (prev == nullptr)
        {
            head = current->next;
        }
        else
        {
            prev->next = current->next;
        }

        delete current;
        cout << "Member with registration number " << regNo << " deleted successfully." << endl;
    }

    void displayMembers()
    {
        Node *current = head;

        while (current != nullptr)
        {
            cout << "Registration Number: " << current->registrationNumber << ", Name: " << current->name << endl;
            current = current->next;
        }
    }

    int countMembers()
    {
        Node *current = head;
        int count = 0;

        while (current != nullptr)
        {
            count++;
            current = current->next;
        }

        return count;
    }

    void displayReverse()
    {
        displayReverseRecursive(head);
    }

    void displayReverseRecursive(Node *current)
    {
        if (current == nullptr)
        {
            return;
        }

        displayReverseRecursive(current->next);
        cout << "Registration Number: " << current->registrationNumber << ", Name: " << current->name << endl;
    }

    void concatenateLists(ClubList &otherList)
    {
        if (head == nullptr)
        {
            head = otherList.head;
        }
        else
        {
            Node *current = head;
            while (current->next != nullptr)
            {
                current = current->next;
            }
            current->next = otherList.head;
        }

        // Set the other list to an empty list
        otherList.head = nullptr;
    }
};

int main()
{
    ClubList clubList;

    int choice;
    do
    {
        cout << "\nClub Member Management Menu:" << endl;
        cout << "1. Add Member\n";
        cout << "2. Delete Member\n";
        cout << "3. Display Members\n";
        cout << "4. Display in Reverse Order\n";
        cout << "5. Concatenate Lists (for two divisions)\n";
        cout << "6. Compute Total Members\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int regNo;
            string name;

            cout << "Enter Registration Number: ";
            cin >> regNo;
            cout << "Enter Name: ";
            cin.ignore(); // Ignore the newline character in the buffer
            getline(cin, name);

            clubList.addMember(regNo, name);
            cout << "Member added successfully." << endl;
            break;
        }
        case 2:
        {
            int regNo;
            cout << "Enter Registration Number to delete: ";
            cin >> regNo;
            clubList.deleteMember(regNo);
            break;
        }
        case 3:
            cout << "\nClub Members:\n";
            clubList.displayMembers();
            break;
        case 4:
            cout << "\nClub Members in Reverse Order:\n";
            clubList.displayReverse();
            break;
        case 5:
        {
            ClubList division2List;

            cout << "\nEnter Division 2 Member Information:\n";
            int regNo;
            string name;
            cout << "Enter Registration Number: ";
            cin >> regNo;
            cout << "Enter Name: ";
            cin.ignore(); // Ignore the newline character in the buffer
            getline(cin, name);
            division2List.addMember(regNo, name);

            clubList.concatenateLists(division2List);
            cout << "Lists concatenated successfully.\n";
            break;
        }
        case 6:
            cout << "Total Members: " << clubList.countMembers() << endl;
            break;
        case 7:
            cout << "Exiting the program.\n";
            break;
        default:
            cout << "Invalid choice. Please enter a valid option.\n";
        }

    } while (choice != 7);

    return 0;
}
