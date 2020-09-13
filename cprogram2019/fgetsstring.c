//fgets(string_name,string_size,stdin)
#include<stdio.h>
#include<string.h>
int main()
{
char name[20];
printf("Enter the name:\n");
fgets(name,20,stdin);
printf("The name is %s\n",name);
printf("size of the string is %d\n",sizeof(name));
printf("string length is %d\n",strlen(name));//null char added here.Ans;13
}
