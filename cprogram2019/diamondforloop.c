//diamond star using for loop
#include<stdio.h>
int main()
{
int i,j,num;
printf("Enter the num:\n");
scanf("%d",&num);
for(i=1;i<=num;i++)
    {
    for(j=1;j<=num-i;j++)
        {
        printf(" ");
        }
    for(j=1;j<=2*(i-1);j++)
        {
        printf("*");
        }
    printf("\n");
    }
for(i=num;i>=1;i--)
    {
    for(j=1;j<=num-i;j++)
        {
        printf(" ");
        }
    for(j=1;j<=2*(i-1);j++)
        {
        printf("*");
        }
    printf("\n");
    }
}
