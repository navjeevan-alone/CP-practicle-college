// enter 5 elements in array and then display the sorted array in ascending order
#include <stdio.h>
void main()
{
    int arr[5];
    printf("Enter the array : ");
    for (int i = 0; i <= 5; i++)
    {
        scanf("%d ", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j <= 5; j++)
        {
            if (arr[i] > arr[j])// just change > to < for descending array
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted array is : ");
    for (int i = 0; i <= 5; i++)
    {
        printf("%d, ", arr[i]);
    }
}
