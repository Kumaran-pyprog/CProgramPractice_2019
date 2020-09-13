//find the greatest number using pointer
#include<stdio.h>
#include<stdlib.h>
void main()
{
int *ptr,max,i,arr[50],n;
printf("Enter the sze of an array:\n");
scanf("%d",&n);
printf("Enter the array element:\n");
ptr=&arr[0];
for(i=0;i<n;i++)
    {
    scanf("%d",ptr);
    ptr++;
    }
ptr=&arr[0];
max=*ptr;
for(i=0;i<n;i++,ptr++)
    {
    if(*ptr>max)
        {
        max=*ptr;

        }
    }
printf("Max of element is %d\n",max);
}
