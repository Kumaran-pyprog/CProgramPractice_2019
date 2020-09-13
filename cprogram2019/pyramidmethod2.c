//pyramid program using forloop
#include<stdio.h>
int main()
{
int i,j,num;
printf("Enter the number:\n");
scanf("%d",&num);
for(i=1;i<=num;i++)
    {
    for(j=1;j<=2*num-1;j++)
        {
        if(j>=num-(i-1)&& j<=num+(i-1))
            {
            printf("*");
            }
        else
            {
            printf(" ");
            }
        }
        printf("\n");
    }
}
