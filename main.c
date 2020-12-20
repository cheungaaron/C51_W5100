#include<stdio.h>
#include"test.h"
void swaptest(int a,int b);
int main(void)
{
    int a = 2;
    int b = 3;
    swaptest(a,b);
    system("pause");
    return 0;
}
// void swaptest(int a, int b)
// {
//     int i;
//     i = a;
//     a = b;
//     b = i;
//     printf("%d\n%d\n",a,b);
// }