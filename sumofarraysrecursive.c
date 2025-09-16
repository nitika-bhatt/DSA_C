#include <stdio.h>

int sum(int n, int arr[], int i){
    if(i==n){
        return 0;
    }
    else{
        return arr[i]+sum(n, arr, i+1);
    }
}

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
    int final_result= sum(n, arr, 0);
    printf("%d", final_result);
    return 0;
}




