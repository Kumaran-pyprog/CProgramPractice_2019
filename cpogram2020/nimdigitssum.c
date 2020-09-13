#include<stdio.h>
int main(){
    int num,count=0,rem,rev=0,sum=0;
    printf("Enter the num:");
    scanf("%d",&num);
    while(num>0){
        count++;
        num=num/10;
    }
    while(num>0){
        rem=num%10;
        sum+=rem;
        num=num/10;
    }
    //reverse the digits
    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    printf("num of digits is %d\n",count);
    printf("sum of digits is %d\n",sum);
    printf("Reverse the num is %d\n",rev);
}
