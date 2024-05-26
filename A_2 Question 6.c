
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter 1st integer:");
    scanf("%d",&a);
    
    printf("enter 2nd integer: ");
    scanf("%d" ,&b);
    
    printf("enter 3rd integer:");
    scanf("%d", &c);
    
    int  average= (a+b+c)/3;
    printf("The average is : %d\n",average);
    
    return 0;
}    