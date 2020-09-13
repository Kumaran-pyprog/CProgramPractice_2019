//forloop-count the digits
#include<stdio.h>
int main()
{
int num,i,sum=0;
printf("Enter the number:\n");
scanf("%d",&num);
printf("i val is:\n");
for(i=0;i<=num;i++)
    {
    sum=sum+i;
    printf("%d\n",i);
    }
printf("sum val is %d\n",sum);
}
