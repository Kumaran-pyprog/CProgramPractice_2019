//accessing 2D element using pointer
#include<stdio.h>
#include<stdlib.h>
int main()
{
int arr[][4]={{11,22,33,44},
              {10,20,30,40},
              {100,200,300,400},
             };
int *ptr,i,j;
ptr=arr;
for(i=0;i<3;i++)
    {
    for(j=0;j<4;j++)
        {
        printf("%d\t",*(*(arr+i)+j));
        }
    printf("\n");
    }
printf("Accessing elment \n");
for(i=0;i<3;i++)
    {
    for(j=0;j<4;j++)
        {
        printf("%d\t",*ptr++);
        }
    printf("\n");
    }
}
