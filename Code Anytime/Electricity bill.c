#include<stdio.h>
int main()
{
    int a;
    float b;
    printf("Enter number of units:");
    scanf("%d", &a);
    printf ("Enter per unit rate:");
    scanf("%f", &b);
    printf("The bill is %f", a*b);
    return 0;
}
