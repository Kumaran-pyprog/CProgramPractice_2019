//array of pointer using malloc()
#include<stdio.h>
#include<stdlib.h>
#define r 3
#define c 3
int main()
{
int i,j;
int *p[3];
for(i=0;i<r;i++)
    {
    p[i]=malloc(sizeof(int)*c);
    }
if(p==NULL)
    {
    printf("Memory is not allocated\n");
    exit(0);
    }
for(i=0;i<r;i++)
    {
    for(j=0;j<c;j++)
        {
        scanf("%d",&p[i][j]);
        }
    }
for(i=0;i<r;i++)
    {
    for(j=0;j<c;j++)
        {
        printf("%d\t",p[i][j]);
        }
        printf("\n");
    }
free(p[0]);
free(p[1]);
free(p[2]);
}
