//Find the second largest element of an array
#include<stdio.h>
int main()
{
int size,i,max=0,sec_largest_array=0,third_largest=0;
printf("Enter the size:\n");
scanf("%d",&size);
int a[size];
printf("Enetr the array val:\n");
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
sec_largest_array=a[0];
for(i=0;i<size;i++)
    {
        if(a[i]< max && a[i]>sec_largest_array)
        {
            sec_largest_array=a[i];
        }
    }
printf("The second largest element of an array is %d\n",sec_largest_array);
third_largest=a[0];
for(i=0;i<size;i++)
    {
        if(a[i]<sec_largest_array && a[i]>third_largest)
        {
        third_largest=a[i];
        }
    }
printf("The Third largest element of an array is %d\n",third_largest);

}
