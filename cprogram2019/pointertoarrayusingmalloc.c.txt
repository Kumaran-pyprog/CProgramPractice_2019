//pointer to array using malloc()
#include<stdio.h>
#include<stdlib.h>
#define r 3
#define c 3
int main()
{
int (*p)[c]=(int (*)[])malloc(sizeof(int)*r*c);
if(p==NULL)
    {
    printf("Memory is not allocated");
    exit(0);
    }
int i,j;
for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
        {
        scanf("%d",&p[i][j]);
        }
    }
for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
        {
        printf("%d\t",p[i][j]);
        }
        printf("\n");
    }
    free(p);
}
