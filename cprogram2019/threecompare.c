//Greatest of three number
#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the a,b,c:\n");
scanf("%d%d%d",&a,&b,&c);
if(a>c)
    {
    if(a>b)
       {
        printf("A is greater");
       }
    else
        {
            printf("B is greater");
        }
     }
else
    {
        if(b>c)
          {
            printf("B is Greater Val");
          }
          else
          {
              printf("C is Greater val");
          }
    }

}


