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
    int ele;
    printf("\nEnter the element to search:");
    scanf("%d", &ele);
     for (int i = 0; i < n; i++) {
        if (arr[i]==ele){
            printf("ELement found at index %d", i);
        }
    }
    return 0;
}
