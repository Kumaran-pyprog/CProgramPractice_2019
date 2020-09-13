//strcat() function
#include<stdio.h>
#include<string.h>
int main()
{
char str1[100],str2[100];
printf("Enter the str1:\n");
gets(str1);
printf("Enter the str2:\n");
gets(str2);
strcat(str1,str2);
printf("The strcat val is %s\n",str1);
}
