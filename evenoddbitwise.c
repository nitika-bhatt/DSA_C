#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d", &n);
    if(n & 1){
        printf("The number is ODD");
        printf("\n");
    }
    else{
        printf("The number is EVEN");
    }
    return 0;
}