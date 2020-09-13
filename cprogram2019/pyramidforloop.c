//pyramid pattern using forloop
#include<stdio.h>
int main()
{
int i,j,num;
char c='A';
printf("Enter the number:\n");
scanf("%d",&num);
for(i=1;i<=num;i++)
    {
    for(j=1;j<=num-i;j++)
        {
        printf(" ");
        }
    for(j=1;j<=(2*(i-1));j++)
        {
        printf("%c",c);
        }
    printf("\n");
    }
}
