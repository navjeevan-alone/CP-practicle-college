/*WAP, to study behavior of increment/decrement post and pre operator*/
#include <stdio.h>
void main()
{
    int a = 10;
    int b, c;
    b = ++a; // pre-increment of variable
    /*  a=a+1; b=a+1;
        a=11;  b=11;    */
    printf("%d %d", a, b);
    c = a++; // post-increment of variable
    /*c=a+1; a=a+1
      c=12;  a=11   */
    printf("\n%d %d", a, c);
}
// Output
//  11 11
//  12 11