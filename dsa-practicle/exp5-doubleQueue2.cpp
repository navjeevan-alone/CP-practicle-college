#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};

class Deque
{
private:
    Node *front;
    Node *rear;
    int count;

public:
    Deque() : front(nullptr), rear(nullptr), count(0) {}

    // Insert an item at the front of the deque
    void insertFront(int item)
    {
        Node *newNode = new Node(item);
        if (isEmpty())
        {
            front = rear = newNode;
        }
        else
        {
            newNode->next = front;
            front->prev = newNode;
            front = newNode;
        }
        count++;
    }

    // Insert an item at the rear of the deque
    void insertRear(int item)
    {
        Node *newNode = new Node(item);
        if (isEmpty())
        {
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            newNode->prev = rear;
            rear = newNode;
        }
        count++;
    }

    // Delete an item from the front of the deque
    void deleteFront()
    {
        if (isEmpty())
        {
            cout << "Deque is empty." << endl;
            return;
        }
        Node *temp = front;
        if (front == rear)
        {
            front = rear = nullptr;
        }
        else
        {
            front = front->next;
            front->prev = nullptr;
        }
        delete temp;
        count--;
    }

    // Delete an item from the rear of the deque
    void deleteRear()
    {
        if (isEmpty())
        {
            cout << "Deque is empty." << endl;
            return;
        }
        Node *temp = rear;
        if (front == rear)
        {
            front = rear = nullptr;
        }
        else
        {
            rear = rear->prev;
            rear->next = nullptr;
        }
        delete temp;
        count--;
    }
    // Function to display the elements in the deque
    void display()
    {
        if (isEmpty())
        {
            cout << "Deque is empty." << endl;
            return;
        }
        Node *current = front;
        cout << "Deque elements: ";
        while (current != nullptr)
        {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    // Get the front item from the deque
    int getFront()
    {
        if (isEmpty())
        {
            cout << "Deque is empty." << endl;
            return -1; // Return a default value
        }
        return front->data;
    }

    // Get the last item from the deque
    int getRear()
    {
        if (isEmpty())
        {
            cout << "Deque is empty." << endl;
            return -1; // Return a default value
        }
        return rear->data;
    }

    // Check whether the deque is empty or not
    bool isEmpty()
    {
        return count == 0;
    }

    // Get the number of elements in the deque
    int size()
    {
        return count;
    }

    // Delete all elements from the deque
    void erase()
    {
        while (!isEmpty())
        {
            deleteFront();
        }
    }
};

int main()
{
    Deque deque;
    int choice, item;

    cout << "1. Insert at front\n2. Insert at rear\n3. Delete from front\n4. Delete from rear\n5. Get Front\n6. Get Rear\n7. Is Empty\n8. Size\n9. Erase\n10. Exit\n11. Display" << endl;
    do
    {
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter item to insert at the front: ";
            cin >> item;
            deque.insertFront(item);
            break;
        case 2:
            cout << "Enter item to insert at the rear: ";
            cin >> item;
            deque.insertRear(item);
            break;
        case 3:
            deque.deleteFront();
            break;
        case 4:
            deque.deleteRear();
            break;
        case 5:
            cout << "Front item: " << deque.getFront() << endl;
            break;
        case 6:
            cout << "Rear item: " << deque.getRear() << endl;
            break;
        case 7:
            cout << "Is deque empty: " << (deque.isEmpty() ? "Yes" : "No") << endl;
            break;
        case 8:
            cout << "Size of deque: " << deque.size() << endl;
            break;
        case 9:
            deque.erase();
            break;
        case 10:
            cout << "Exiting the program." << endl;
            break;
        case 11:
            deque.display();
            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 10);

    return 0;
}
