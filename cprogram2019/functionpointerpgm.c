#include<stdio.h>
#include<stdlib.h>
void add(int,int);
void sub(int,int);
void mul(int,int);
void divi(int,int);
void (*fun[4])(int,int)={add,sub,mul,divi};
void main()
{
int a,b,choice;
printf("Enter the val of a&b:\n");
scanf("%d%d",&a,&b);
printf("1.add val\n");
printf("2.sub val\n");
printf("3.mul val\n");
printf("4.div val\n");
printf("5.exit\n");
printf("Enter the choice:\n");
scanf("%d",&choice);
switch(choice)
    {
    case 1:
            fun[0](a,b);
            break;
    case 2:
            fun[1](a,b);
            break;
    case 3:
            fun[2](a,b);
            break;
    case 4:
            fun[3](a,b);
            break;
    case 5:
            exit(0);
            break;
    default:
            printf("Entered choice is wrong.please look!!!");
            break;

    }
}
void add(int a,int b)
    {
    printf("add val is %d\n",a+b);
    }
void sub(int a,int b)
    {
    printf("sub val is %d\n",a-b);
    }
void mul(int a,int b)
    {
    printf("mul val is %d\n",a*b);
    }
void divi(int a,int b)
    {
    printf("div val is %d\n",a/b);
    }
