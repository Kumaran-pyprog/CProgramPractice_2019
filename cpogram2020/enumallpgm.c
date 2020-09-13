#include<stdio.h>
#include<string.h>
enum days {SUN,MON,Tue,Wed,Thurs,Fri,SAT};
enum session {spring,summer,winter,autum};
enum testcond {failed=0,passed=1,test_failed=0,test_pass=1};
int main(){
    enum days day;
    //day=MON;
    enum session climate;
    enum testcond status;
    status=failed;
    printf("failed=%d\n",status);
    status=passed;
    printf("passed=%d\n",status);
    status=test_failed;
    printf("test_failed=%d\n",status);
    status=test_pass;
    printf("test_pass=%d\n",status);
    printf("MON=%d\n",day);
    for(int i=SUN;i<=SAT;i++){
        printf("%d\n",i);
    }
    climate=summer;
    printf("climate=%d\n",climate);
    climate=spring;
    printf("climate=%d\n",climate);
    climate=winter;
    printf("climate=%d\n",climate);
    climate=autum;
    printf("climate=%d\n",climate);
    for(int i=spring;i<=autum;i++){
        printf("%d\n",i);
    }
    int num;
    int count_pass=0;
    int count_failed=0;
    //enum testcond status;
    printf("Enter the num:");
    scanf("%d",&num);
    if(num%2==0){
        status=test_pass;
        printf("%d is Even Num\n",num);
        printf("%d says Test passed\n",status);
        count_pass++;
    }
    else{
        status=test_failed;
        printf("%d is Odd Num\n",num);
        printf("%d says Test Failed\n",status);
        count_failed++;
    }
    printf("Passed count:%d\n",count_pass);
    printf("Failed count:%d\n",count_failed);

}
