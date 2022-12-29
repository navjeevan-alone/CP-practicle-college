#include <stdio.h>
#include "Efirst.c"

void run()
{
    extern int a;
    extern int b;
    printf("%d %d", a, b);
    
}
run();
