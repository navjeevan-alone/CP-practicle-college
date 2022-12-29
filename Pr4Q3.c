// WAP, to enter two numbers and display addtion,substraction , multiplication and division using arithematic
#include <stdio.h>
void main()
{
    int a, b;
    char ch;
    printf("Enter two numbers :");
    scanf("%d %d", &a, &b);

    printf("\nEnter operation symbol :");
    scanf("%s", &ch);
    // ch = getche();

    switch (ch)
    {
    case '+':
        printf("Addtion is : %d", a + b);
        break;
    case '-':
        printf("Substraction is : %d", a - b);
        break;
    case '*':
        printf("Multiplication is : %d", a * b);
        break;
    case '/':
        printf("division is : %d", a / b);
        break;
        default:
            printf("Invalid operation");
            break;
    }
}