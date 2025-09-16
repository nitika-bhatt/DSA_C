#include<stdio.h>
int main()
{
    int n;
  
    printf("Enter the number %d \n", n);
    scanf("%d", &n);
    if(n%2==0){
        printf("The number is EVEN");
    }
    else{
        printf("The number is ODD");
    }
    return 0;
}