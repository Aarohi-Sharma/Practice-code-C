#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter coefficients of equation:");
    scanf("%d %d %d", &a, &b, &c);
    int d=b^2-(4*a*c);
    if (d==0)
        printf("roots are %d and %d", (-b/(2*a)));
    else if (d<0)
        printf ("roots are imaginary");
    else if (d>0)
        printf ("roots are %d and %d", ((-b+(d^1/2))/(2*a)), ((-b-(d^1/2))/(2*a)));
    return 0;
}
