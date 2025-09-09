#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int sum=0;
    for(int i=0;i<=n;i++){
        sum=sum+i;
        printf("%d + %d = %d", sum - i, i, sum);
        printf("\n");
    }
}