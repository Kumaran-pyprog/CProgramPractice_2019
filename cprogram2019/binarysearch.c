//Binary search algorithms
#include<stdio.h>
int binarysearch(int a[],int,int);
int main()
{
int size,i,key;
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
printf("Enter the key val:\n");
scanf("%d",&key);
int pos=binarysearch(a,key,size);
if(pos)
    {
    printf("Element found at %d position",pos);
    }
else
    {
    printf("Element does not found");
    }
}
int binarysearch(int a[],int key,int size)
    {
    int low,mid,high;
    low=0;

    high=size-1;
    while(low<=high)
        {
        mid=(low+high)/2;
        if(a[mid]==key)
            {
            return mid+1;
            }
        else if(key>a[mid])
            {
            low=mid+1;
            }
        else
            {
            high=mid-1;
            }
        }
    }
