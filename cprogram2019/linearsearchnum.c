//linear search
#include<stdio.h>
#include<stdlib.h>
#define MAX 8
int main()
{
int arr[MAX],pos=0,i,n;
printf("Enter the array: \n");
for(i=0;i<MAX;i++)
    {
    scanf("%d",&arr[i]);
    }
printf("Enter the search number:\n");
scanf("%d",&pos);
for(i=0;i<MAX;i++)
     {
     if(pos==arr[i])
        {
        printf("Element found at %d position \n",i+1);
        //pos=i;
        }
     }
    if(pos==0)
        {
        printf("Element does not found");
        }

}
