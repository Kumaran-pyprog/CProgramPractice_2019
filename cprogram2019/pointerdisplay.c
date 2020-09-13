//pointer
#include<stdio.h>
#include<stdlib.h>

int main()
{
int x[50];
int *p1,*p2,i=0;
p1=&x[0];//p1=x;
char resp='y';
while(resp=='y' || resp=='Y')
    {
        printf("Enter the array element:\n");
        scanf("%d",&x[i]);
        printf("Enter one or more(y/n): ");
        fflush(stdin);
        resp=getchar();
        i++;
    }
    p2=&x[i];
    printf("No of array element is %d\n",p2-p1);
    for(;p1<p2;)
        {
        printf("%d\t",*p1++);
        }
}
