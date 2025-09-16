#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("Teh number of elements in an array %d\n", n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int key;
    scanf("Enter the key you want to find: %d", &key);
    
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            printf("The number if found at: %d", i);
        }}}