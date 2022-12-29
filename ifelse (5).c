// WAP, to enter a marks of three subjects of student and calculate total and average and display                result using average calculation
#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter a three numbers : ");
    scanf("%d %d %d", &a, &b, &c);

    int total = a + b + c;
    int avg = total / 3;
    printf("Total : %d \nAverage : %d\n", total, avg);

    if (avg >= 60)
    {
        printf("1st rank");
    }
    else if (avg < 60 && a >= 50)
    {
        printf("2nd rank");
    }
    else if (avg < 50 && a >= 40)
    {

        printf("3rd rank");
    }
    else
    {
        printf("Failed!");
    }
}