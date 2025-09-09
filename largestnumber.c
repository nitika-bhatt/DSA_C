#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the numbers: ");
    scanf("%d %d", &a, &b);
    if(a>b){
        printf("The first number is largest among the two");
    }
    else{
        printf("The second number is largest among the two");
    }
}