//Find the largest elemnent of an array
#include<stdio.h>
int main()
{
int i,size,max;
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
max=a[0];
for(i=0;i<size;i++)
    {
    if(a[i]>max)
        {
        max=a[i];
        }
    }
printf("Max val of array is %d\n",max);
}












