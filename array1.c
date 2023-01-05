// WAP, to enter 10 numbers and display it using for loop 
#include <stdio.h>
void main()
{
    int arr[10];
    printf("Enter 10 numbers :");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }
}