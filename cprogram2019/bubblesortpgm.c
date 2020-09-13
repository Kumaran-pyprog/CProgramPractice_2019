//converting inordered data into ordered data
//bubbleshort program
#include<stdio.h>
void bubblesort(int a[],int);
void display(int a[],int);
int main()
{
int i,j,size;
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
bubblesort(a,size);
display(a,size);

}
 void bubblesort(int a[],int size)
    {
    int i,j,temp;
    for(i=1;i<size;i++)
        {
        for(j=0;j<size-1;j++)
            {
            if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
    }
void display(int a[],int size)
    {
    int i;
    for(i=0;i<size;i++)
        {
        printf("The sorted array is %d\n",a[i]);
        }
    }
