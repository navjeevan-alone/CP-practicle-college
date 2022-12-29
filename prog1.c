/*WAP, to enter two numbers int and float , then add & display them in the form of
int and float
*/
#include <stdio.h>
void main()
{
    int a = 10;
    float b = 11.23;
    float c = (float)a + b;
    int d = a + (int)b;
    clrscr();
    printf("Int Value of d : %d", d);       // int value
    printf("\nFloat Value of c : %f", c);   // float value
    printf("\nFloat Value of c : %.2f", c); // only two decimals
    getch();
}