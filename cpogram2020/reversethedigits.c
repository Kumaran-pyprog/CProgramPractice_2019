#include<stdio.h>
int main(){
    int num,count=0,rem,rev=0,sum=0;
    printf("Enter the num:");
    scanf("%d",&num);
    //reverse the digits
        while(num>0){
            rem=num%10;
            rev=rev*10+rem;
            num=num/10;
            count++;

    }
    printf("num of digits is %d\n",count);
    printf("Reverse the num is %d\n",rev);
}
