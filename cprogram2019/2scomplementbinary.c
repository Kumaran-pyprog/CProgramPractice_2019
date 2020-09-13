//2's complement
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char onescomplement(char [],int);
int main()
{
char str[20];
int n,i;
printf("Enter the binary val: \n");
gets(str);
n=strlen(str);
onescomplement(str,n);
//printf("1's complement val=%s\n",ch);
}
char onescomplement(char str[],int n)
{
int i;
for(i=n-1;i>=0;i--)
    {
    if(str[i]=='0') str[i]='1';
    else
        str[i]='0';

    }
printf("1's complement binary val is =%s,2's comple val=%s\n",str,str+1);

}
