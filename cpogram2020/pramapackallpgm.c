#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma pack(2)
struct stu{
    int rollno;
    int age;
    char sex;
    char name[20];
    float salary;
}var;
//#pragma pack(2)
union col_stu{
    int rollno;
    int age;
    char sex;
    char name[20];
    float salary;
}col_var={1001,32,'M',"Ashok",23450.34};
typedef struct col2_stu{
    int rollno2;
    int age2;
    char sex2;
    char name2[20];
    float salary2;
}var2;
int main(){
    struct stu var={1001,32,'M',23450.34};
    printf("sizeof struct is %d\n",sizeof(var));//Actual size 36 after using pragma pack(1) size is 33.pragma pack(2) is 34
    union col_stu col_var;
    printf("sizeof union is %d\n",sizeof(col_var));//size of union is 20.
    typedef struct col2_stu var2;
    var2 v={1001,32,'M',"Ashok",23000.34};
    printf("sizeof typedef struct is %d\n",sizeof(v));


}
