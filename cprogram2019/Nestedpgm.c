#include<stdio.h>
//nested loop program
int main()
{
int a,b,c;
printf("Enter the value of a,b,c:\n");
scanf("%d%d%d",&a,&b,&c);
if (a>b)
    {
    if (a>c)
        {
         printf("A is greater than B");
        }
    else
        {
        printf("C is greater than A");
        }
    }
else
    {
    if(b>c)
        {
        printf("B is greater than C");
        }
    else
        {
        printf("C is greater than B ");
        }
    }

}
