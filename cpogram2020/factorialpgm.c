#include<stdio.h>
int main(){
    int num,fact=1;
    printf("Enter the num:");
    scanf("%d",&num);
    int num1=num;
    while(num1>0){
        fact=fact*num1;
        num1=num1-1;
    }
    printf("%d factorial val is %d\n",num,fact);
}
