//count the number of digits
#include<stdio.h>
int main()
{
int num,count=0;
printf("Enter the number:\n");
scanf("%d",&num);
while(num!=0)
    {
    count++;
    num/=10;
    }
printf("Count the num of digits is %d\n",count);
}
