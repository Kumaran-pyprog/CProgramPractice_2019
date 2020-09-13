//array of pointer
#include<stdio.h>
int main()
{
int row,col,i,j;
printf("Enter the row&col:\n");
scanf("%d%d",&row,&col);
int a[row][col];
printf("Enter the array val:\n");
for(i=0;i<row;i++)
    {
    for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
for(i=0;i<row;i++)
    {
    for(j=0;j<col;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
int *ptr[row];
for(i=0;i<row;i++)
    {
    ptr[i]=a[i];
    }
for(i=0;i<row;i++)
    {
    for(j=0;j<col;j++)
        {
        printf("%d\t",ptr[i][j]);
        }
        printf("\n");
    }
}
