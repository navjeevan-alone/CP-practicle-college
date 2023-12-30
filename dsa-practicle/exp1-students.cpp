#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class Student
{
public:
    int roll;
    string name;
    float sgpa;

    // Constructor
    Student(int r, const string &n, float s) : roll(r), name(n), sgpa(s) {}
};

// Bubble Sort
void sortByRoll(Student students[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (students[j].roll > students[j + 1].roll)
            {
                swap(students[j], students[j + 1]);
            }
        }
    }
}

// Insertion Sort
void sortByName(Student students[], int n)
{
    for (int i = 1; i < n; ++i)
    {
        Student key = students[i];
        int j = i - 1;
        while (j >= 0 && students[j].name > key.name)
        {
            students[j + 1] = students[j];
            j--;
        }
        students[j + 1] = key;
    }
}

// Quick Sort
int partitionBySGPA(Student students[], int low, int high)
{
    float pivot = students[high].sgpa;
    int i = low - 1;

    for (int j = low; j < high; ++j)
    {
        if (students[j].sgpa >= pivot)
        {
            i++;
            swap(students[i], students[j]);
        }
    }

    swap(students[i + 1], students[high]);
    return i + 1;
}

void quickSortBySGPA(Student students[], int low, int high)
{
    if (low < high)
    {
        int pivot = partitionBySGPA(students, low, high);
        quickSortBySGPA(students, low, pivot - 1);
        quickSortBySGPA(students, pivot + 1, high);
    }
}

// Binary Search by Name
int binarySearchByName(Student students[], int left, int right, const string &target)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (students[mid].name == target)
        {
            return mid;
        }
        if (students[mid].name < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1; // Not found
}

int main()
{
    const int arraySize = 10;

    // Create an array of Student objects
    Student students[arraySize] = {
        {15, "Alice", 9.0},
        {12, "Bob", 8.5},
        {18, "Charlie", 7.2},
        {13, "David", 8.0},
        {20, "Emily", 9.5},
        {11, "Frank", 6.7},
        {14, "Grace", 7.8},
        {16, "Hannah", 9.2},
        {19, "Isaac", 8.4},
        {17, "Jane", 7.0}};

    // a) Roll Call List (Bubble Sort)
    sortByRoll(students, arraySize);
    cout << "Roll Call List (sorted by roll number):\n";
    for (int i = 0; i < arraySize; ++i)
    {
        cout << "Roll: " << students[i].roll << ", Name: " << students[i].name << ", SGPA: " << students[i].sgpa << endl;
    }
    cout << endl;

    // b) Arrange list alphabetically (Insertion Sort)
    sortByName(students, arraySize);
    cout << "Alphabetically sorted list of students:\n";
    for (int i = 0; i < arraySize; ++i)
    {
        cout << "Roll: " << students[i].roll << ", Name: " << students[i].name << ", SGPA: " << students[i].sgpa << endl;
    }
    cout << endl;

    // c) Find first ten toppers (Quick Sort)
    quickSortBySGPA(students, 0, arraySize - 1);
    cout << "Top ten students by SGPA:\n";
    for (int i = 0; i < 10; ++i)
    {
        cout << "Roll: " << students[i].roll << ", Name: " << students[i].name << ", SGPA: " << students[i].sgpa << endl;
    }
    cout << endl;

    // d) Search students by SGPA
    float targetSGPA = 8.4;
    bool found = false;
    cout << "Students with SGPA " << targetSGPA << ":\n";
    for (int i = 0; i < arraySize; ++i)
    {
        if (students[i].sgpa == targetSGPA)
        {
            cout << "Roll: " << students[i].roll << ", Name: " << students[i].name << endl;
            found = true;
        }
    }
    if (!found)
    {
        cout << "No students found with SGPA " << targetSGPA << endl;
    }
    cout << endl;

    // e) Binary search by name
    string targetName = "Hannah";
    int index = binarySearchByName(students, 0, arraySize - 1, targetName);
    if (index != -1)
    {
        cout << "Student found: Roll: " << students[index].roll << ", Name: " << students[index].name << ", SGPA: " << students[index].sgpa << endl;
    }
    else
    {
        cout << "Student with name " << targetName << " not found.\n";
    }

    return 0;
}
