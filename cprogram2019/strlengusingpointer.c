//length of the string using pointer
#include<stdio.h>
#include<stdlib.h>
int mystrlength(char *);
int main()
{
int i,size;
printf("Enter the string:\n");
scanf("%d",&size);
char str[30];
printf("Enter the string:\n");
gets(str);
int res=mystrlength(str);
printf("length of the string is %d\n",res);
}
int mystrlength(char *str)
{
int count=0;
while(*str!='\0')
    {
    count++;
    str++;
    }
    return count;
}
