//reverse the number
#include<stdio.h>
#include<stdlib.h>
#define MAX 123459
int main()
{
int num,i,rem,rev;
printf("Enter the number from 1 to %d",MAX);
for(i=123450;i<=MAX;i++)
    {
    num=i;
    rev=0;
    while(num>0)//123
        {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
        }
    printf("Reverse the digit is %d\n",rev);

    }
}
