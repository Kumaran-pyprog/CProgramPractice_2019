//reverse the digits
#include<stdio.h>
int main()
{
int num,rem=0,reverse=0;
printf("Enter the num:\n");
scanf("%d",&num);
while(num!=0)
    {
    rem=num%10;
    reverse=reverse*10+rem;
    num=num/10;
    }
printf("Reverse the digits is %d\n",reverse);
}
