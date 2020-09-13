//duplicate num array
#include<stdio.h>
int main()
{
int size,i,j,dub,dubn;
printf("Enter the array size:\n");
scanf("%d",&size);
int a[size];
for(i=0;i<size;i++)
    {
    scanf("%d",&a[i]);
    }
printf("The array are:\n");
for(i=0;i<size;i++)
    {
    printf("%d\n",a[i]);
    }
    for(i=1;i<=size;i++)
    {
    dub=0;
    for(j=i;j<=size;j++)
        {
        if(a[j]<=a[i])
          {
          dub=dub+1;
          }
        }
    if(dub>1)
        {
        printf("%d is a duplicate element\n",a[i]);
        dubn=1;
        }
    }
    if(dub==0)
        {
        printf("There is no duplicate element:\n");
        }

}
