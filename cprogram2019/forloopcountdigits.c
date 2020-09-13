//forloop -count the digits
#include<stdio.h>
int main()
{
int num,i,count=0;
printf("Enter the number:\n");
scanf("%d",&num);
for(count=0;num!=0;count++)
    {
    num/=10;
    }
printf("count the no of digits %d\n",count);
}
