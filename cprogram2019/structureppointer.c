//structure using pointer
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stu{
int a;
char name[30];
float fl;
double d;
}var;
int main()
{
struct stu *ptr=&var;
printf("Enter the val:\n");
fflush(stdin);
scanf("%d %s %f %lf",&ptr->a,ptr->name,&ptr->fl,&ptr->d);
printf("a=%d name=%s  fl=%f d=%lf\n",ptr->a,ptr->name,ptr->fl,ptr->d);
}
