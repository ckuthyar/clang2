#include<stdio.h>
int main(){
    double num1=0.0;
    double den1=0.0;
    double result1=0.0;
    printf("Enter first number");
    scanf("%lf",&num1);
    printf("Enter second number");
    scanf("%lf",&den1);
    if(den1==0){
       printf("cannot divide by zero");
       return 0;
    }
    result1=num1/den1;
    printf("%lf",result1);
    return 0;
}

