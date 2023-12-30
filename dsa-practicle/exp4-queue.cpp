#include <iostream>
#define MAX 10
using namespace std;

// Define a struct for the queue
struct queue
{
    int data[MAX];
    int front, rear;
};

// Create a Queue class to encapsulate queue operations 
/* The above class is a C++ implementation of a queue data structure. */
class Queue
{
    struct queue q;

public:
    Queue() { q.front = q.rear = -1; }

    // Check if the queue is empty
    int isempty()
    {
        return (q.front == q.rear) ? 1 : 0;
    }

    // Check if the queue is full
  
    int isfull()
    {
        return (q.rear == MAX - 1) ? 1 : 0;
    }

    // Enqueue an element into the queue
    void enqueue(int x)
    {
        q.data[++q.rear] = x;
    }

    // Dequeue an element from the queue
    int delqueue()
    {
        return q.data[++q.front];
    }

    // Display the elements in the queue
    void display()
    {
        int i;
        cout << "\n";
        for (i = q.front + 1; i <= q.rear; i++)
            cout << " " << q.data[i];
    }
};

int main()
{
    Queue obj;
    int ch, x;
    do
    {
        cout << "\n 1. Insert job\n 2. Delete job\n 3. Display\n 4. Exit\n Enter your choice:";
        cin >> ch;
        switch (ch)
        {
        case 1:
            if (!obj.isfull())
            {
                cout << "\n Enter data:";
                cin >> x;
                obj.enqueue(x);
            }
            else
                cout << "Queue is overflow";
            break;
        case 2:
            if (!obj.isempty())
                cout << "\n Deleted Element=" << obj.delqueue();
            else
            {
                cout << "\n Queue is underflow";
            }
            cout << "\n Remaining jobs :";
            obj.display();
            break;
        case 3:
            if (!obj.isempty())
            {
                cout << "\n Queue contains:";
                obj.display();
            }
            else
                break;
            cout << "\n Queue is empty";
            break; // Added a missing 'break' statement here
        case 4:
            cout << "\n Exit";
            break; // Added a missing 'break' statement here
        }
    } while (ch != 4);
    return 0;
}
