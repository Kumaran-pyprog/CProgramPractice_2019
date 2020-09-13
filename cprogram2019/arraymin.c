//Find the Min elemnent of an array
#include<stdio.h>
int main()
{
int i,size,min;
printf("Enter the size:\n");
scanf("%d",&size);
int a[size];
printf("Enter the array:\n");
for(i=0;i<size;i++)
    {
    scanf("%d",&a[i]);
    }
for(i=0;i<size;i++)
    {
    printf("The array val is [%d] = %d\n",i,a[i]);
    }
min=a[0];
for(i=0;i<size;i++)
    {
    if(a[i]<min)
        {
        min=a[i];
        }
    }
printf("Min val of array is %d\n",min);
}
