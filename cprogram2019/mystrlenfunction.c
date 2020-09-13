//mystrlen using function
#include<stdio.h>
#include<string.h>
int mystrlen(char str[]);
int main()
{
int res;
char str[100];
printf("Enter the string:\n");
gets(str);
res=mystrlen(str);
printf("The length of the string is %d\n",res);

}
int mystrlen(char str[])
    {
    int count=0,i=0;
    while(str[i]!='\0')
        {
        count++;
        i++;
        }
        return count;
    }
