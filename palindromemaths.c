#include<stdio.h>

int main(){
    int  n;
    scanf("%d", &n);
    printf("The num is: %d", n);
    int rev=0;
    int num=n;
    while(n){
        int rem=n%10;
        rev=(rev*10)+rem;
        n=n/10;
    }
    if(rev==num)
    {
        printf("\nPalindrome");
    }
    else{
        printf("Not a Palindrome");
    }
}