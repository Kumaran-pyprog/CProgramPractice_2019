//string
#include<stdio.h>
#include<string.h>
#define SPACES "  "
int main()
{
char surname[10],first[20],last[20],fullname[50];
printf("Enter the surname: \n");
gets(surname);
strcpy(fullname,surname);
strcat(fullname,SPACES);
printf("Enter the fistname: \n");
gets(first);
//strcpy(fullname,first);
strcat(fullname,first);
printf("Enter the last name: \n");
gets(last);
strcat(fullname,SPACES);
strcat(fullname,last);
printf("fullname %s\n",fullname);

}
