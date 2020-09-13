//structure initialization
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack{
    int id;
    char name[20];

};
int main()
{
printf("structure access using arrays");
struct stack st={10,"Ashok"};
printf("a=%d\n",st.id);
strcpy(st.name,"Ashok");
printf("Name=%s\n",st.name);
printf("structure access using pointer\n");
struct stack n={1001,"kumar"};
struct stack *ptr;
ptr=&n;
printf("id=%d\n",ptr->id);
strcpy(ptr->name,"kumar");
printf("Name=%s\n",ptr->name);

}
