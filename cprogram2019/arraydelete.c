//array element to delete
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[20],n,i,x;
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    printf("Enter the array element:\n");
    for(i=0;i<n;i++)
        {
        scanf("%d",&arr[i]);
        }
    printf("Enter the delete element position:\n");
    scanf("%d",&x);
    --x;
    for(i=x;i<n;i++)
        {
        arr[i]=arr[i+1];
        }
    --n;
    printf("After deleting the array element:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}
