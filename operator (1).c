/*WAP, to display the value of variable using unary operator*/
#include <stdio.h>
void main()
{
    int a = 10;
    int b, c;
    b = ++a;
    printf("%d %d", a, b);
    c = a++;
    printf("\n%d %d", a, c);
}
