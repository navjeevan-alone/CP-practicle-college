/* WAP, assign different types of value in differnt types
of variable and display using format specifier.*/
#include <stdio.h>
void main()
{
    int a = 76;
    float b = 23.223;
    char x = 'A';
    char d[] = "String";

    // display all values with default format specifier
    printf("a = %d, b=%f,x=%c  d=%s", a, b, x, d);
    // coverting value from int to ASCII and vice versa
    printf("\n a=%c, x=%d", a, x);
}
