//count the character
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
int count=0,i=0;
char name[100];
printf("Enter the character:\n");
gets(name);
while(name[i]!='\0')
    {
    i++;
    count++;
    }
printf("count the char %d\n",count);

}
