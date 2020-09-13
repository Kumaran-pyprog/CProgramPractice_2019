#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct emp{
    int rollno;
    char name[20];
    int age;
    float salary;
    char place[20];
}v;
int main(){
    v em;
    printf("size of typedef structure is %d\n",sizeof(em));
    printf("Enter the rollno:");
    scanf("%d",&em.rollno);
    //fflush(stdin);
    printf("Enter the name:");
    gets(em.name);
    printf("Enter the age:");
    scanf("%d",&em.age);
    printf("Enter the salary:");
    scanf("%f",&em.salary);
    prinf("Enter the place:");
    gets(em.place);
    FILE *fw;
    fw=fopen("fwstruct.txt","w");
    fwrite(&em,sizeof(em),1,fw);
    rewind(fw);
    fclose(fw);
    FILE *fr;
    fr=fopen("fwstruct.txt","r");
    fread(&em,sizeof(em),1,fr);
    printf("Rollno=%d Name=%s Age=%d Salary=%.2f Place=%s\n",em.rollno,em.name,em.age,em.salary,em.place);
    /*char fr2;
    //while((fr2=fgetc(fr))!=EOF){
    //    printf("%c",fr2);
    }*/
    fclose(fr);

    //fread(&em,sizeof(em),1,fr);
    //printf("Rollno=%d\n",em.rollno);
    //printf("Name=%s\n",em.name);
    //printf("Age=%d\n",em.age);
    //printf("Salary=%.2f\n",em.salary);
    //printf("Place=%s\n",em.place);


}
