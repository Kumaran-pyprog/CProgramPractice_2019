//How to reset the bit using bitwise operator
#include<stdio.h>
int main()
{
int num,position,num1,num2,num3;
printf("Enter the num:\n");
scanf("%d",&num);
printf("Enter the position bit:\n");
scanf("%d",&position);
//Reseting the bit
num1=num&~(1<<position);
printf("Reset bit val is %d\n",num1);
//Setting the bit
num2=num|~(1<<position);
printf("Set bit val is %d\n",num2);
//Toggle bit
num3=num^(1<<position);
printf("Toggle bit val is %d\n",num3);
}
