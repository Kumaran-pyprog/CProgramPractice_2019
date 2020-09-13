//queue using array
#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int queue[MAX];
int front,rear;
void frontend(int val)
    {
    if(rear<MAX)
        {
        ++rear;
        queue[rear]=val;
        }
    else
        {
        printf("Queue is full\n");
        }
    }
void rearend(int val)
    {
    if(front<MAX)
        {
        val=queue[front];
        ++front;
        printf("Deleted elements are:\n",val);
        }
    else
        {
        printf("queue is empty\n");
        }
    }
void display()
    {
    int i=0;
    for(i=front;i<=rear;i++)
        {
        printf("%d\t",queue[i]);
        }
    }
void main()
{
int resp=0,choice=0,val=0;
front=1,rear=0;
while(resp!=4)
    {
    printf("**************Queue**************\n");
    printf("1.Queue insertion\n");
    printf("2.Queue deletion\n");
    printf("3.Display\n");
    printf("4.Exit\n");
    printf("Enter the choice:\n");
    scanf("%d",&choice);
    switch(choice)
        {
         case 1:
            printf("Enter the element:\n");
            scanf("%d",&val);
            frontend(val);
            break;
        case 2:
            rearend(val);
            break;
        case 3:
            display();
            break;
        case 4:
            break;
        default:
            printf("Invalid enter \n");
            break;
        }

    }

}
