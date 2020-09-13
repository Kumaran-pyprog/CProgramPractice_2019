//calculator using switch case
#include<stdio.h>
#include<stdlib.h>
int main()
{
int a,b,add=0,sub=0,mul=0,div=0,mod=0;
char ch;
printf("1.add\n");
printf("2.sub\n");
printf("3.mul\n");
printf("4.div\n");
printf("5.mod\n");
printf("6.exit\n");
printf("Enter the choice:\n");
scanf("%c",&ch);
switch(ch)
    {
    case '1':
          printf("Enter the value of a&b:\n");
          scanf("%d%d",&a,&b);
          add=a+b;
          printf("add val is %d\n",add);
          break;
    case '2':
          printf("Enter the value of a&b:\n");
          scanf("%d%d",&a,&b);
          sub=a-b;
          printf("sub val is %d\n",sub);
          break;
    case '3':
          printf("Enter the value of a&b:\n");
          scanf("%d%d",&a,&b);
          mul=a*b;
          printf("Mul val is %d\n",mul);
          break;
    case '4':
          printf("Enter the value of a&b:\n");
          scanf("%d%d",&a,&b);
          div=a/b;
          printf("div val is %d\n",div);
          break;
    case '5':
          printf("Enter the value of a&b:\n");
          scanf("%d%d",&a,&b);
          mod=a%b;
          printf("Mod val is %d\n",mod);
          break;
    case '6':
          exit(0);
          break;
    default:
           printf("Entered choice is wrong.Please Try again!!!");
           break;
      }
}
