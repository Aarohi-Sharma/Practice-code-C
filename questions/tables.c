#include <stdio.h>
int main()
{
    int n1;
    printf("Enter a number to generate its table:");
    scanf("%d", &n1);
    if (n1<=0)
    {
        printf("Enter a positive number");
    }
    else
    {
        for (int i=1; i<=10; i++)
        {
            printf("\n %d x %d = %d", n1, i, n1*i);
        }
    }
    return 0;
}
