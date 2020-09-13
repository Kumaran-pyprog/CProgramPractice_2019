//queue using pointer
#include<stdio.h>
#include<stdlib.h>
struct queue{
int arr[100];
int f, r;
};
void queueinsert(struct queue *q,int val)
    {
    ++q->r;
    q->arr[q->r]=val;
    }
void queuedelete(struct queue *q)
    {
    int val;
    val=q->arr[q->f];
    ++q->f;
    printf("Deleted elements are:%d\n",val);
    }
void queuedisplay(struct queue *q)
    {
    int i;
    for(i=q->f;i<=q->r;i++)
        {
        printf("%d\t",q->arr[i]);
        }
    }
void main()
    {
    int val=0,choice=0;
    struct queue *q;
    q->f=1;
    q->r=0;
    while(choice!=4)
        {
        printf("*************Queue Operation using Pointer***************\n");
        printf("1.InsertQueue\n");
        printf("2.DeleteQueue\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("Enter the choice:\n");
        scanf("%d",&choice);
        switch(choice)
            {
            case 1:
                printf("Enter the element:\n");
                scanf("%d",&val);
                //queueinsert(q,val);
                break;
            case 2:
                //queuedelete(q);
                break;
            case 3:
                //queuedisplay(q);
                break;
            case 4:
                break;
            default:
                printf("Invalid entry\n");
                break;
            }
    }
}
