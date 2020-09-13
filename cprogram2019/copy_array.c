//one dimensinal array using fuction
#include<stdio.h>
void read_array(int [],int);
void display_array(int [],int);
void copy_array(int [],int [],int);
int main()
{
int size,i;
printf("Enetr the array size:\n");
scanf("%d",&size);
int a[size],b[size];
printf("Enter the array val:\n");
read_array(a,size);
display_array(a,size);
copy_array(a,b,size);

}
void read_array(int a[],int size)
    {
    int i=0;
    for(i=0;i<size;i++)
        {
            scanf("%d",&a[i]);
        }
    }

void display_array(int a[],int size)
    {
    int i;
    for(i=0;i<size;i++)
        {
        printf("The array val is [%d] = %d\n",i,a[i]);
        }
    }
copy_array(int a[],int b[],int size)
    {
    int i;
    for(i=0;i<size;i++)
        {
        b[i]=a[i];
        printf("array val is [%d]------>a[%d]---->%d  After copy  b[%d]----->%d\n",i,i,a[i],i,b[i]);
        }

    }


