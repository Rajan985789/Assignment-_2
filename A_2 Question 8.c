
#include<stdio.h>
int main(){
    float principal,rate,time;
    
    printf("Enter the principal amount:");
    scanf("%f",&principal);
    
    printf("Enter the rate of intrest:");
    scanf("%f", &rate);
    
    printf("Enter the time period of year:");
    scanf("%f", &time);
    
    float simple_intrest = (principal * rate * time)/100;
    
    printf("The simple intrest is:%.2f\n",simple_intrest);
    return 0;
}    
