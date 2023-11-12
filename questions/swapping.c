#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a=10, b=20;
    int *p=&a, *q=&b;
    printf ("Values before swap are, a=%d, b=%d\n", a, b);
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
    printf ("Values after swap are, a=%d, b=%d", a, b);
    return 0;
}
