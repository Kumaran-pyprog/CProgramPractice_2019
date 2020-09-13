//do-while positive number
#include<stdio.h>
int main()
{
int num,i,repeat;
do{
  printf("Enter the number:\n");
  scanf("%d",&num);
  if(num>0)
    {
    printf("Number is positive\n");
    }
  else
    {
    printf("Number is Negative\n");
    }
printf("Do you want to repeat.0-No,1-Yes\n");
scanf("%d",&repeat);
 }while(repeat!=0);
}
