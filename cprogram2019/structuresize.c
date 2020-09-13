//structure program
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stu{
int a;
char name[20];
float fl;
}var;
int main()
{
struct stu var;
printf("Enter the int val:\n");
scanf("%d",&var.a);
fflush(stdin);
printf("Enter the name:\n");
gets(var.name);
printf("Enter the float val:\n");
scanf("%f",&var.fl);
printf("sizeof structure =%d\n",sizeof(var));
printf("a=%d,name=%s,fl=%f\n",var.a,var.name,var.fl);
}
