//search algorithms
#include<stdio.h>
int search(int [],int,int);
int main()
{
int size,key,i;
printf("Enter the array size:\n");
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
printf("Enter the search element:\n");
scanf("%d",&key);
int pos=search(a,key,size);
if(pos)
    {
    printf("Element found at %d position",pos);
    }
else
    {
    printf("Element does not found");
    }

}

int search(int a[],int key,int size)
    {
        int i;
        for(i=0;i<size;i++)
        {
            if(key==a[i])
                {
                  return i+1;
                }
        }
    }
