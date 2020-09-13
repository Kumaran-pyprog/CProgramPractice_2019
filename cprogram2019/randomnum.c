//random num
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void main()
{
int num;
int i=0,sum=0;
//randomize();//initialize the random
printf("random num are :\n");
for(i=1;i<=100;i++)
    {
    num=rand();
    sum=sum+num;
    printf("%d\t",num);
    printf("%d\n",sum);
    }


}
