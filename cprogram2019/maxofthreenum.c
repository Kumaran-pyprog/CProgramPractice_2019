//Find the largest of three number using ternary
#include<stdio.h>
int main()
{
int a,b,c,max,max2;
printf("Enter the number:\n");
scanf("%d%d%d",&a,&b,&c);
max=(a>b?a:b);
max2=(max>c?max:c);
printf("Max value of three number is %d\n",max2);

}
