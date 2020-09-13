//insert a sub string into main string
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SPACES " "
int main()
{
char mainstr[50],fullstr[50];
char substr[50];
int n,pos=0,i=0;
printf("Enter the mainstring:\n");
gets(mainstr);
strcpy(fullstr,mainstr);
//strcat(fullstr,SPACES);
n=strlen(fullstr);
printf("Enter the position of string to insert:\n");
scanf("%d",&pos);

printf("Enter the substr:\n");
gets(substr);
//strcat(fullstr,substr);
//printf("fullstring is %s\n",fullstr);*/
while(fullstr[i]!='\0')
    {
    i++;
    if(fullstr[i]==pos)
        {
        fullstr[i]=substr[i];
        }
     printf("%s\n",fullstr[i]);
    }



}
