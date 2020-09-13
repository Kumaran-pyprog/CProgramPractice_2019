//realloc
#include<stdio.h>
#include<stdlib.h>
int main()
{
int i;
int *d=(double *)malloc(sizeof(double)*5);
if(d==NULL)
    {
    printf("Memory is not allocated\n");
    exit(0);
    }
for(i=0;i<5;i++)
    {
    printf("%u---->%lf\n",&d[i],d[i]);
    }
d=(double *)realloc(d, sizeof(double)*10);
printf("After realloc ");
for(i=0;i<10;i++)
    {
    printf("%u---->%lf\n",&d[i],d[i]);
    }
free(d);
}
