#include<stdio.h>
#include<stdlib.h>
struct list{
  int data;
  struct list *next;
};
void create_list(struct list *node);
void display(struct list *node);
void main()
{
struct list *start=(struct list *)malloc(sizeof(struct list));
create_list(start);
display(start);
}
void create_list(struct list *node)
    {
    struct list *temp;
    printf("Enter the element: ");
    scanf("%d",&node->data);
    if(node->data==-9999)
        {
        temp->next=NULL;
        }
    else
        {
        temp=node;
        node->next=(struct list *)malloc(sizeof(struct list));
        create_list(node->next);
        }
    }
void display(struct list *node)
    {
    printf("The elements are:\n");
    while(node!= NULL)
        {
        printf("%d->", node->data);
        node=node->next;
        }
    }
