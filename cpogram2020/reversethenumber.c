#include<stdio.h>
int main(){
    int n,rem=0,rev=0;
    printf("Enter the number:");
    scanf("%d",&n);
    int num;
    num=n;
    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("Reverse the digits %d\n",rev);
}
