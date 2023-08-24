#include <stdio.h>
int search(int arr[], int x, int low, int high) 
{
    if (high>=low)
    {
        int mid = low + (high-low)/2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            return search(arr, x, low, mid-1);
        }
        else
        {
            return search(arr, x, mid+1, high);
        }
    }
    return -1;
}
int main()
{
  int arr[] = {3, 4, 5, 6, 7, 8, 9};
  int n=sizeof(arr)/sizeof(arr[0]);
  int x;
  printf ("Enter value to search:");
  scanf ("%d", &x);
  int result = search(arr, x, 0, n-1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
  return 0;
}
