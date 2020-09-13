//ternary operator
#include<stdio.h>
int main(){
    int a,b,c,max;
    printf("Enter the val of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    max=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("max val is %d\n",max);

}
