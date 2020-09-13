//sscanf
#include<stdio.h>
#include<stdlib.h>
#define size 30
int main()
{
char date[size];
int dd,mm,yy;
printf("Enter the date:\n");
scanf("%d%d%d",&dd,&mm,&yy);
sscanf(date,"%d%d%d",&dd,&mm,&yy);
printf("date=%d,month=%d,year=%d\n",dd,mm,yy);
}
