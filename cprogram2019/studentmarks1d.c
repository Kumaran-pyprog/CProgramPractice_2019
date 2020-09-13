//student marks
#include<stdio.h>
#include<stdlib.h>
int main()
{
int marks[10];
int i,total=0;
float percentage;
printf("Enter the Marks: \n");
for(i=0;i<6;i++)
    {
    scanf("%d",&marks[i]);
    total += marks[i];
    }
printf("total marks=%d\n",total);
percentage=total/6;
printf("Percentage of marks=%f\n",percentage);
}
