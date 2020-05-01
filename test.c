#include<stdio.h>
#include"test.h"
void swaptest(int a, int b)
{
    int i;
    i = a;
    a = b;
    b = i;
    printf("%d\n%d",a,b);
}
