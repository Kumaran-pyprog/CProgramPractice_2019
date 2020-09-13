//2dimen Transpose matrix array
#include<stdio.h>
int main()
{
int i,j,row,col,sum=0;
printf("Enter the array size:\n");
scanf("%d%d",&row,&col);
int a[row][col],b[col][row];
printf("Enter the array val:\n");
for(i=0;i<row;i++)
    {
    for(j=0;j<col;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
printf("The 2dimen array val is:\n");
for(i=0;i<row;i++)
    {
    for(j=0;j<col;j++)
        {
        printf("[%d]\t",a[i][j]);
        }
        printf("\n");
    }
for(i=0;i<row;i++)
    {
    for(j=0;j<col;j++)
        {
        b[j][i]=a[j][i];
        }
    }
printf("The 2dimen Transpose Matrix of array val is:\n");
for(i=0;i<row;i++)
    {
    for(j=0;j<col;j++)
        {
        printf("[%d]\t",b[j][i]);
        }
        printf("\n");
    }
}
