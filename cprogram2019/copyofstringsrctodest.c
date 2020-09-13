//copy of src to dest
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void my_strcpy(char [],char []);
int main()
{
char src[100]="hello123",dest[100];
//printf("Enter the src string:\n");
//gets(src);
my_strcpy(dest,src);
printf("dest val is %s\n",dest);

}
void my_strcpy(char dest[],char src[])
    {
    int i=0;
    while(src[i]!= '\0')
        {
        dest[i]=src[i];
        i++;
        }
    dest[i]!= '\0';
    //printf("dest val is %s\n",dest);
    }
