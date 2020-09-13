//count the positive number using forloop
#include<stdio.h>
int main()
{
int num,i,count=0;
printf("Enter the number:\n");
for(i=1;i<10;i++)
    {
    scanf("%d",&i);
    if(i<0)
        {
        printf("Error!!!.Please Enter the Positive number");
        continue;
        }
        count++;
    }
    printf("Count the positive number is %d\n",count);
}
