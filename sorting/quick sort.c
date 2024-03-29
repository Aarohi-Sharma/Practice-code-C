#include<stdio.h>
int swap (int*a, int*b)
{
    int t= *a;
    *a=*b;
    *b=t;
}
int partition(int arr[], int low, int high)
{
    int pivot=arr[high];
    int i=low-1;
    for (int j=low; j<high; j++)
    {
        if (arr[j]<=pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return (i+1);
}
void sort(int arr[], int low, int high)
{
    if (low<high)
    {
        int pi=partition(arr, low, high);
        sort(arr, low, pi-1);
        sort(arr, pi+1, high);
    }
}
int main()
{
    int arr[]={10, 7, 3, 4, 5, 22};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr, 0, n-1);
    printf("Sorted array is:\n");
    for (int i=0; i<n; i++)
    {
        printf ("%d\t", arr[i]);
    }
    return 0;
}
