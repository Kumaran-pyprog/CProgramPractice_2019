//1's complement 000011--->111100
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
char str[10];
int n,i;
printf("Enter the binary value: \n");
gets(str);
n=strlen(str);
for(i=n-1;i>=0;i--)
    {
    if(str[i]=='0') str[i]='1';
    else
       str[i]='0';
    }
printf("1's complement of binary val is =%s",str);
}
