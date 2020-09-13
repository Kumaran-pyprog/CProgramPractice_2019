//forloop-sum of digits
#include<stdio.h>
int main()
{
int num,rem=0,sum;
printf("Enter the num:\n");
scanf("%d",&num);
for(sum=0;num>0;num=num/10)
    {
    rem=num%10;
    sum=sum+rem;

    }
printf("sum of digits is %d\n",sum);
}
