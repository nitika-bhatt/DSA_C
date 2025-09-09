#include<stdio.h>
int main(){
    int n, rev=0, rem;
    printf("Enter the number: ");
    scanf("%d", &n);

    // loop until n becomes 0
    for(; n != 0; n /= 10) {
        rem = n % 10;
        rev = rev * 10 + rem;
    }

    printf("The reversed number is: %d\n", rev);
    return 0;
}