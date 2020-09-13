//calloc -dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
int main()
{
int *p=(int *)calloc(5,sizeof(int));
if (p==NULL)
    {
    printf("Memory is not allocated");
    exit(1);
    }
//*p=10;
printf("Address of p=%p\n",p);
printf("p=%u\n",*p);
int i;
for(i=0;i<5;i++)
    {
    printf("%u=%d\n",p+i,*(p+i));//p[i]--->*(p+i),&p[i]--->p+i
    }
free(p);
}

