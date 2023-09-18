#include<stdio.h>
int main()
{
    int choice;
    int s, l1, l2, r;
    printf("Press 1 for area of square, 2 for rectangle, 3 for circle, 4 for triangle:");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:     
        printf("Enter length of side:");
        scanf("%d", &s);
        printf("Area is %d", s^2);
        break;
        case 2:      
        printf("Enter length of sides:");
        scanf("%d %d", &l1, &l2);
        printf("Area is %d", l1*l2);
        break;
        case 3:
        printf("Enter length of radius:");
        scanf("%d", &r);
        printf("Area is %d", 3.14*r*2);
        break;
    }
    return 0;
}
