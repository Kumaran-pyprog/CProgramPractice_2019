#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#pragma pack(1)
typedef struct emp{
    int rollno;
    char name[20];
    char age;
    float salary;
}var;
int main(){
    typedef struct emp var;
    var emp2={1001,"Kumaran",32,23000.45};
    printf("sizeof structure is %d\n",sizeof(emp2));
    //write the file
    FILE *fp;
    fp=fopen("filewrite.txt","w");
    if(fp==NULL){
        printf("File doesn't Open\n");
    }
    //fputs("welcome to file concepts in C",fp);
    char ch2[1000];
    printf("Enter the text:");
    gets(ch2);
    fputs(ch2,fp);
    printf("\n");
    fwrite(&emp2,sizeof(emp2),1,fp);
    //rewind(fp);
    fclose(fp);
    //Read the file
    FILE *fpr;
    fpr=fopen("filewrite.txt","r");
    if(fpr==NULL){
        printf("File doesn't open");
    }
    else{
        char ch;
        while((ch=fgetc(fpr))!=EOF){
            printf("%c",ch);
        }
        printf("\n");
        fread(&emp2,sizeof(emp2),1,fp);
        printf("\nRollno=%d\n Name=%s\n Age=%d\n Salary=%.2f\n",emp2.rollno,emp2.name,emp2.age,emp2.salary);

    }
    fclose(fpr);

    }


