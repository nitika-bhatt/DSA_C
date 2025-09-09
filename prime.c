#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    if(n <= 1) {
        printf("0 and 1 are not prime\n");
    } 
    else {
        for(int i = 2; i*i <= n; i++) { 
            if(n % i == 0) {
                printf("The number is not prime\n");
                break;
            }
            else{
                printf("The number is prime\n");
    }
}
}}
