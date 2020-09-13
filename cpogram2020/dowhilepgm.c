#include<stdio.h>
#include<stdlib.h>
int main(){
    int i=0,n,sum=0;
    printf("Enter the n val:");
    scanf("%d",&n);
    do{
            sum+=i;
            i=i+1;
    }while(i<n);
    printf("Sum val is %d\n",sum);
}
