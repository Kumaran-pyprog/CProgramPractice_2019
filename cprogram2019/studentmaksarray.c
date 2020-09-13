//calculate student marks ,total,average
#include<stdio.h>
int main()
{
int size,i,marks[5],total,avg;
printf("Enter the size:\n");
scanf("%d",&size);
for(i=0;i<size;i++)
    {
    printf("Enter the student marks %d:",i+1);
    scanf("%d",&marks[i]);
    }
for(i=0;i<size;i++)
    {
    total+=marks[i];
    }
avg=total/size;
printf("Total marks %d\n",total);
printf("Avg marks %d\n",avg);
if (total>=450)
    {
    printf("Grade A+--Range between 450 to 500");
    }
else if(total>=400 && total<450)
    {
    printf("Grade A-Range between 400 to 450");
    }
else
    {
        printf("Grade B-Range 150 to 350");
    }

}
