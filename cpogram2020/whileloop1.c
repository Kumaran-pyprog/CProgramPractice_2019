#include<stdio.h>
int main(){
int n,i=0;
printf("Enter the n val:");
scanf("%d",&n);
printf("i val is:\n");
while(i<=n){
    printf("%d ",i);
    if (i==5){
        break;
    }
    i=i+1;
}
}
