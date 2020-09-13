//simple array program
#include<stdio.h>
int main()
{
int i,a[5];
printf("Enter the array:\n");
for(i=0;i<5;i++)
    {
     scanf("%d",&a[i]);
    }
for(i=0;i<5;i++)
    {
    printf("Array of[%d] = %d\n",i,a[i]);
    }
}
