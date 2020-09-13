//strcat user defined function
#include<stdio.h>
#include<string.h>
void mystrcat(char str2[],char str1[]);
int main()
{
char str1[100],str2[100];
printf("Enter the str1:\n");
gets(str1);
printf("Enter the str2:\n");
gets(str2);
mystrcat(str2,str1);
}
void mystrcat(char str2[],char str1[])
{
int i=0,j=0;
for(;str2[i]!='\0';i++);
    {
    for(;str1[j]!='\0';i++,j++)
        {
        str2[i]=str1[j];
        }
    }
    str2[i]!='\0';
    printf("The strcat val is %s\n",str2);

}
