//strcmp
#include<stdio.h>
#include<string.h>
int main()
{
char str1[100],str2[100],str3[100];
printf("Enter the str1:\n");
gets(str1);
printf("Enter the str2:\n");
gets(str2);
printf("Enter the str3:\n");
gets(str3);
int res=strcmp(str1,str2);
printf("The strcmp1 val is %d\n",res);
int res2=strcmp(str2,str3);
printf("The strcmp2 val is %d\n",res2);

}
