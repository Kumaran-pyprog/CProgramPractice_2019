//continue statement
#include<stdio.h>
int main()
{
int num,count=0;
printf("Enter the number:\n");
while(num<10)
    {
    scanf("%d",&num);
    if(num<0)
        {
        printf("Error!!!.Please Enter the positive number");
        continue;
        }
    count++;
    }
    printf("count the positive num %d\n",count);
}
