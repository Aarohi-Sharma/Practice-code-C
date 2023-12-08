#include<stdio.h>
int main(){
    int n, arr[100];
    printf("Enter size of array:");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d:", i + 1);
        scanf("%d", &arr[i]);
    }
    int sum=0;
    for (int i = 0; i < n; i++) {
        sum+=arr[i];
    }
    printf("Sum of elements is %d", sum);
    return 0;
}
