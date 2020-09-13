//sum of array
#include<stdio.h>
int main()
{
int sum=0,i,a[5];
printf("Enter the array:\n");
for(i=0;i<5;i++)
    {
     scanf("%d",&a[i]);
    }
for(i=0;i<5;i++)
    {
    sum+=a[i];
    printf("Array of[%d] = %d\n",i,a[i]);
    }
printf("sum of array is %d\n",sum);
}
