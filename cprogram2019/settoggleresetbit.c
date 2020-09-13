//Reset,set and toggle the bit
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int num,pos;
printf("Enter the number:\n");
scanf("%d",&num);
printf("Enter the number:\n");
scanf("%d",&pos);
//set the bit
num=num |(1<<pos);
printf("set the bit %d\n",num);
//toggle the bit
num=num^(1<<pos);
printf("Toggle the bit %d\n",num);
//Reset the bit
num=num&(~(1<<pos));
printf("Reset the bit %d\n",num);
}
