#include<stdio.h>
void merge(int arr[], int low, int mid, int rear)
{
    int i, j, k;
    int n1= mid-low+1;
    int n2= rear-mid;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
    {
        L[i] = arr[low+ i];
    }
    for (j = 0; j < n2; j++)
    {
        R[j] = arr[mid+ 1 + j];
    }  
    i = 0;
    j = 0;
    k = low;
    while (i < n1 && j < n2) 
    {
        if (L[i] <= R[j]) 
        {
            arr[k] = L[i];
            i++;
        }
        else 
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) 
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) 
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void sort(int arr[], int low, int rear)
{
    if (low < rear) 
    {
        int mid = low + (rear - low) / 2;
        sort(arr, low, mid);
        sort(arr, mid + 1, rear);
        merge(arr, low, mid, rear);
    }
}
int main()
{
    int arr[]={10, 37, 3, 4, 5};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr, 0, n-1);
    printf("Sorted array is:\n");
    for (int i=0; i<n; i++)
    {
        printf ("%d\t", arr[i]);
    }
    return 0;
}
