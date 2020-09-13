//stack using pointer
#include<stdio.h>
#include<stdlib.h>
#define MAX 50

struct stackptr{
    int stack[MAX];
    int top;
};
void init_stk(struct stackptr *st)
    {
    st->top=0;
    printf("%d\n",st->top);
    }

void push(struct stackptr *st,int val)
    {
    if(st->top<MAX)
        {
        st->stack[st->top]=val;
        st->top++;
        }
    else
        {
        printf("stack is full\n");
        }
    }
int pop(struct stackptr *st)
    {
    int val;

    if(st->top>0)
        {
        val=st->stack[st->top];
        st->top--;
        return val;
        }
    else
        {
        printf("stack is empty\n");
        }
    }
void display(struct stackptr *st)
    {
    int a=0;
    st=&a;
    st->top=a;
    int i;
    printf("Stack elements are:\n");
    for(i=0;i<st->top;i++)
        {
        printf("%d\t",st->stack[i]);
        }

    }

void main()
    {
    int val=0,choice=0;
    struct stackptr *st;
    init_stk(st);

    while(choice!=4)
        {
        printf("*******************stack operation using pointer*******************\n");
        printf("1.PUSH \n");
        printf("2.POP \n");
        printf("3.Display \n");
        printf("4.Exit \n");
        printf("Enter the choice:\n");
        scanf("%d",&choice);
        switch(choice)
            {
            case 1:
                printf("Enter the element:\n");
                scanf("%d",&val);
                push(st,val);
                break;
            case 2:
               val=pop(st);
               break;
            case 3:
                display(st);
                break;
            case 4:
                break;
            default:
                printf("Wrong value Entered \n");
                break;

            }
        }
    }
