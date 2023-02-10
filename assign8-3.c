// WAP, to display the value of variable using function with no argument but return value
#include <stdio.h>
int inc();
int x = 10;
void main()
{
    int i, j, k;
    i = inc();
    j = inc();
    k = inc();
    printf("%d\t%d\t%d\t", i, j, k);
};
int inc()
{
    return x++;
};
// output
// 10 11 12