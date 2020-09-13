//string length
#include<stdio.h>
#include<string.h>
int main()
{
char str[50];
int i=0;
printf("Enter the string:\n");
gets(str);
while(str[i]!='\0')
   {
     i++;
   }
printf("string length is %d\n",i);
}
