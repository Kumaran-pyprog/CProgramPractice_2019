//strong number
#include<stdio.h>
#include<stdlib.h>
#define MAX  100
int main()
{
int num,i,temp=0;
printf("Enter the number:\n");
scanf("%d",&num);
printf("Enter the num from 1 to %d\n",MAX);
for(i=1;i<=MAX;i++)
    {
    temp=num;
    if(num%i==0)
        {
        printf("%d\n",i);
        }
    }


}

