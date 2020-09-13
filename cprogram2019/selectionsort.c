//slectionsort algorithms
#include<stdio.h>
void selectionsort(int a[],int);
void display(int a[],int);
int main()
{
int i,size;
printf("Enter the size:\n");
scanf("%d",&size);
int a[size];
printf("Enter the array val:\n");
for(i=0;i<size;i++)
    {
    scanf("%d",&a[i]);
    }
for(i=0;i<size;i++)
    {
    printf("The array val is [%d] = %d\n",i,a[i]);
    }
selectionsort(a,size);
display(a,size);
}
void selectionsort(int a[],int size)
    {
        int i,j,temp,min;
        for(i=0;i<size;i++)
        {
            min=i;
            for(j=i+1;j<size;j++)
            {
                if(a[j]< a[min])
                {
                    min=j;
                }
            }
            if(i!=min)
            {
                temp=a[i];
                a[i]=a[min];
                a[min]=temp;
            }
        }

    }
void display(int a[],int size)
    {
        int i;
        for(i=0;i<size;i++)
        {
            printf("The selectionsort array val is %d\n",a[i]);
        }
    }
