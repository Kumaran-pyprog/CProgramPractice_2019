//string character using bubble sort techniques
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void bubblestr(char arr[][50],int n)
{
char temp[50];
int i,j;
for(i=0;i<=n-2;i++)
    {
    for(j=0;j<=n-2;j++)
        {
        if(stricmp(arr[j],arr[j+1])>0)
            {
            strcpy(temp,arr[j]);
            strcpy(arr[j],arr[j+1]);
            strcpy(arr[j+1],temp);
            }
        }
    }
}
int main()
{
char arr[50][50];
int n,i;
printf("Enter the size of an array: \n");
scanf("%d",&n);
fflush(stdin);
printf("Enter the array: \n");
for(i=0;i<n;i++)
    {

    gets(arr[i]);
    }
bubblestr(arr,n);
printf("After the output an alphapetical order\n");
for(i=0;i<n;i++)
    {
    puts(arr[i]);
    }

}
