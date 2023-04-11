// WAP, to enter a number the display that is even or odd using function with no argument and no return value
#include <stdio.h>
void even();
void odd();
void main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        even();
    }
    else
    {
        odd();
    }
}
void even()
{
    printf("Number is even");
};
void odd()
{
    printf("Number is odd");
};
// Output
// Enter a number:54
// Number is even