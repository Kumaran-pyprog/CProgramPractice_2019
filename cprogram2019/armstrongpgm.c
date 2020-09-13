//Find the armstrong number from 1 to 100000
#include<stdio.h>
#include<stdlib.h>
#define MAX 1000000
int main()
{
int num,i,rem,sum=0;
printf("Enter the number from 1 to %d\n",MAX);

for(i=2;i<=MAX;i++)
    {
    num=i;
    sum=0;
    while(num>0)
        {
        rem=num%10;
        sum=sum+(rem*rem*rem);
        num=num/10;
        }
    if(sum==i)
        {
        printf("%d is Number is armstrong\n",sum);
        }

    }



}
