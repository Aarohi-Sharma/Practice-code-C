#include<stdio.h>
int main() {
    int n, arr[100];
    printf("Enter size of array:");
    scanf("%d", &n);   
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d:", i + 1);
        scanf("%d", &arr[i]);
    }
    int max = arr[0], min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("%d is maximum, %d is minimum", max, min);
    return 0;
}
