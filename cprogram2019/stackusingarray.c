//stack using array
#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int stack[MAX],top=0;
void push(int val)
    {
    if(top<MAX)
        {
         stack[top]=val;
         top++;
        }
    else
        {
        printf("stack is full\n");
        }
    }
int pop()
    {
    int val;
     if(top>0)
        {
        val=stack[top];
        top--;
        return val;
        }
    else
        {
        printf("stack is empty\n");
        }
    }
void display()
    {
    int i;
    for(i=0;i<top;i++)
    {

        printf("%d\t",stack[i]);
    }
    printf("\n");
    }
void main()
{
int choice=0,val=0;
while(choice!=4)
    {
    printf("**************STACK OPERATION*******************\n");
    printf("1.PUSH Operation\n");
    printf("2.POP Operation\n");
    printf("3.Display the element\n");
    printf("4.exit\n");
    printf("Enter the choice:\n");
    scanf("%d",&choice);
    switch(choice)
        {
        case 1:
            printf("Enter the element:\n");
            scanf("%d",&val);
            push(val);
            break;
        case 2:
            val=pop();
            break;
        case 3:
            display();
            break;
        case 4:
            break;
        default:
            {
            printf("Wrong choice entered\n");
            }
        }
}
}
