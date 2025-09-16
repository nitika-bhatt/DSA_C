#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("ENTER THE STRING: ");
    scanf("%s", str);
    printf("%s", str);
    printf("\n");
    char new[100];
    int n =strlen(str);
    for(int i=0;i<n;i++){
        new[i]=str[n-1-i];
    }
new[n] = '\0';
printf("\n");
printf("%s", new);
return 0;
}