#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter two points:");
    scanf("%d %d", &x, &y);
    if (x>0 && y>0)
        printf("first quadrant");
    else if (x<0 && y>0)
        printf ("second quadrant");
    else if (x<0 && y<0)
        printf ("third quadrant");
    else if (x>0 && y<0)
        printf ("fourth quadrant");
    else
        printf ("origin");
    return 0;
}
