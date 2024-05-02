#include <iostream>
#include <string>

using namespace std;

class ClassA
{
private:
    int data;
    string name;

public:
    // Constructor with parameters
    ClassA(int d, string n)
    {
        data = d;
        name = n;
    }

    // Function to display object data
    void display()
    {
        cout << "Data: " << data << ", Name: " << name << endl;
    }

    // Function to allocate memory for an object using new operator
    static ClassA *createObject(int d, string n)
    {
        ClassA *obj = new ClassA(d, n);
        return obj;
    }

    // Function to deallocate memory for an object using delete operator
    static void deleteObject(ClassA *obj)
    {
        delete obj;
    }
};

int main()
{
    // Creating an object using new operator
    ClassA *obj1 = ClassA::createObject(10, "Object 1");

    // Displaying object data using this pointer
    obj1->display();

    // Creating another object using new operator
    ClassA *obj2 = new ClassA(20, "Object 2");

    // Displaying object data using this pointer
    obj2->display();

    // Deallocating memory for objects using delete operator
    ClassA::deleteObject(obj1);
    delete obj2;

    return 0;
}
