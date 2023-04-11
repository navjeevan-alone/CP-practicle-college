// WAP, to reverse the elements in array
#include <stdio.h>
void main()
{
    int x[5] = {1, 2, 3, 4, 5};
    printf("array elements in reverse order :");
    for (int i = 4; i >= 0; i--)
    {
        printf("%d\t", x[i]);
    }
}
// output
// array elements in reverse order :5      4       3       2       1