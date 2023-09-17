#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter length of sides of triangle:");
    scanf("%d %d %d", &a, &b, &c);
    if (a==b && a==c)
        printf("equilateral triangle");
    else if (a==b || a==c || b==c)
        printf ("isosceles triangle");
    else if (a!=b && a!=c && b!=c)
        printf ("scalene triangle");
    return 0;
}
