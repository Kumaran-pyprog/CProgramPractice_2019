//print the sum of natural number
#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,i,sum=0,sum1=0,sum2=0;
printf("Enter the number:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
    {
    sum+=i;
    }
printf("sum of natural num:%d\n",sum);
for(i=1;i<=n;i++)
    {
    if(i%2==0)
    {
     printf("even num=%d\n",i);
     sum1+=i;
    }
    }
printf("sum of Even num:%d\n",sum1);
for(i=1;i<=n;i++)
    {
    if(i%2==1)
    {
     printf("Odd num=%d\n",i);
     sum2+=i;
    }
    }
printf("sum of Odd num:%d\n",sum2);



}
