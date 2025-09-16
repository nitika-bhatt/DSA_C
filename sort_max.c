#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("The number of elements in an array: %d\n", n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The list of daily sales of a store is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int temp=0;
    for (int i = 0; i<(n-1); i++) {
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;            
        }
        }
    }
    
    printf("The sorted list of daily sales of a store is:\n");
    for (int i = 0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    int max=arr[n-1];
    printf("The maximum in the list is: %d", max);
    return 0;
}
