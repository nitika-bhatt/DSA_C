#include<stdio.h>


void reverse(int n, int arr[n], int s, int e){
    while(s<e){
        int temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++;
        e--;
    }
}
int main() {
    int n, S;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of times you want to shift the array: ");
    scanf("%d", &S);
    reverse(n,arr,0,n-1);
    reverse(n,arr,0,S-1);
    reverse(n,arr,S, n-1);
    printf("The rotated array is: ");
    for(int i=0;i<n;i++){
        printf("%d", arr[i]);
    }

}