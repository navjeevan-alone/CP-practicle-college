#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;

/* Create a new node with the given data */
struct node *createNode(int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = NULL;
    return ptr; // Return the newly created node
}

// Push the input data into the stack
void push(int data)
{
    struct node *ptr = createNode(data);
    if (top == NULL)
    {
        top = ptr;
        return;
    }
    ptr->next = top;
    top = ptr;
}

/* Pop the top element from the stack */
int pop()
{
    int data;
    struct node *temp;
    if (top == NULL)
        return -1;
    data = top->data;
    temp = top;
    top = top->next;
    free(temp);
    return data; // Return the popped data
}

int main()
{
    char str[100];
    int data = -1, operand1, operand2, result;

    /* Input postfix expression from the user */
    cout << "Enter your postfix expression: ";
    fgets(str, 100, stdin);

    for (int i = 0; i < strlen(str); i++)
    {
        if (isdigit(str[i]))
        {
            /*
             * If the input character is a digit, parse
             * character by character to get a complete operand
             */
            data = (data == -1) ? 0 : data;
            data = (data * 10) + (str[i] - '0'); // Corrected '-' to '-'
            continue;
        }

        /* Push the operand into the stack */
        if (data != -1)
        {
            push(data);
        }

        if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') // Corrected 'astr' to 'str'
        {
            /*
             * If the input character is an operator,
             * then pop two elements from the stack,
             * apply the operator, and push the result into
             * the stack
             */
            operand2 = pop();
            operand1 = pop();
            if (operand1 == -1 || operand2 == -1)
                break;
            switch (str[i])
            {
            case '+':
                result = operand1 + operand2;
                /* Pushing result into the stack */
                push(result);
                break;
            case '-':
                result = operand1 - operand2; // Corrected '–' to '-'
                push(result);
                break;
            case '*':
                result = operand1 * operand2;
                push(result);
                break;
            case '/':
                result = operand1 / operand2;
                push(result);
                break;
            }
        }
        data = -1;
    }
    if (top != NULL && top->next == NULL)
        cout << "Output : " << top->data << endl; // Corrected '% d\n' to '<<' and added 'endl'
    else
        cout << "You've entered the wrong expression." << endl;

    return 0;
}
