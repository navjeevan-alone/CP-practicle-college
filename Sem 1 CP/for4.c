// WAP, to display fibonacchi sequnece from 1 - 100
#include <stdio.h>
void main()
{
    int n1 = 1, n2 = 0, currNum = 1;
    printf("%d\n", n2);
    printf("%d\n", n1);

    for (int i = 1; currNum < 100; currNum = n1 + n2)
    {
      
        printf("%d\n", currNum);
        n2 = n1;
        n1 = currNum;
    }
}