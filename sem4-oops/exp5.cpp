#include <iostream>
#include <string>

using namespace std;

class Stud
{
private:
    string name;
    int age;
    string course;

public:
    // Default constructor
    Stud()
    {
        name = "Undefined";
        age = 0;
        course = "Undefined";
        cout << "Default constructor called." << endl;
    }

    // Multiple constructors
    Stud(string n, int a, string c)
    {
        name = n;
        age = a;
        course = c;
        cout << "Constructor with parameters called." << endl;
    }

    // Copy constructor
    Stud(const Stud &other)
    {
        name = other.name;
        age = other.age;
        course = other.course;
        cout << "Copy constructor called." << endl;
    }

    // Overloaded constructor
    Stud(string n)
    {
        name = n;
        age = 0;
        course = "Undefined";
        cout << "Overloaded constructor called." << endl;
    }

    // Destructor
    ~Stud()
    {
        cout << "Destructor called for student: " << name << endl;
    }

    // Function to display student information
    void display() const
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
    }
};

int main()
{
    // Creating objects using different constructors
    Stud student1;                                 // Default constructor
    Stud student2("John", 20, "Computer Science"); // Constructor with parameters
    Stud student3 = student2;                      // Copy constructor
    Stud student4("Alice");                        // Overloaded constructor

    // Displaying student information
    cout << "Student 1:" << endl;
    student1.display();
    cout << endl;

    cout << "Student 2:" << endl;
    student2.display();
    cout << endl;

    cout << "Student 3 (Copy of Student 2):" << endl;
    student3.display();
    cout << endl;

    cout << "Student 4:" << endl;
    student4.display();
    cout << endl;

    return 0;
}
