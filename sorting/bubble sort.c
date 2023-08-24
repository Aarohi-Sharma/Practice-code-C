#include <stdio.h>
void sort(int arr[], int size) 
{
    for (int i=0; i<size-1; i++)
    {
        for (int j=0; j<size-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
  int arr[] = {-2, 0, 81, -45, 23, 7};
  int n=sizeof(arr)/sizeof(arr[0]);
  sort(arr, n);
  printf ("Sorted array is:\n");
  for (int i=0; i<n; i++)
  {
    printf ("%d\t", arr[i]);
  }
}
