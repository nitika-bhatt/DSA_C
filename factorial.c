#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", n);
    int fact=1;
    int i=1;
    while(i<=n){
        fact= fact*i;
        i++;
    }
printf("%d", fact);
}