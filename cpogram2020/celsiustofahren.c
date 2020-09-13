//celsius to faherenheit
#include<stdio.h>
float fahrentocelsius(float);
float celsiustofahren(float);
int main(){
    float celsius,fahren;
    printf("Enter the fahren:");
    scanf("%f",&fahren);
    celsius=fahrentocelsius(fahren);
    printf("Faranheit to celsius val is %f\n",celsius);
    printf("Enter the celsius:");
    scanf("%f",&celsius);
    float fahrenheit=celsiustofahren(celsius);
    printf("celsius to Faranheit val is %f\n",fahrenheit);


}
float fahrentocelsius(float fahren){
    float celsius=(5*(fahren-32))/9;
    return celsius;

}
float celsiustofahren(float celsius){
    float fahren=((9*celsius)/5+32);
    return fahren;
}
