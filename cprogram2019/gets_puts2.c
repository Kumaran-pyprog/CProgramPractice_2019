#include<stdio.h>
#include<string.h>
int main()
{
char name[30];
printf("Enter the person name:");
scanf("%[^\n]" , name);
printf("Hello %s", name);
printf("\nWishing you a very happy birthday to you");

}
