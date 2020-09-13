#include<stdio.h>
int main(){
    int a,b,c,max,min;
    printf("Enter the val of a,b&c:");
    scanf("%d%d%d",&a,&b,&c);
    max=(a>b)?((a>c)?a:c):((b>c)?b:c);
    min=(a<b)?((a<c)?a:c):((b<c)?b:c);
    printf("max val %d:\n",max);
    printf("min val %d:\n",min);
}
