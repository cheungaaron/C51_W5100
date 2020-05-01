#include<stdio.h>
#include"test.h"
extern void swaptest(int a,int b);
int main(void)
{
    int a = 2;
    int b = 3;
    swaptest(a,b);
}