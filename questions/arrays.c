 #include <stdio.h>
int main()
{
    int n, sum=0;
    int arr[n];
    printf("Enter size of array:");
    scanf("%d", &n);
    for (int i=0; i<n; i++)
    {
        printf ("Enter element %d:", i);
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<n; i++)
    {
        sum=sum+arr[i];
    }
    printf("Sum of array elements is: %d", sum);
    return 0;
}
