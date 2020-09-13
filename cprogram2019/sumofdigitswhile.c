//sum of digits
#include<stdio.h>
int main()
{
int num,rem=0,sum=0;
printf("Enter the number:\n");
scanf("%d",&num);
while(num!=0)
    {
    rem=num%10;
    sum=sum+rem;
    num=num/10;
    }
printf("sum of digit is %d\n",sum);
}
