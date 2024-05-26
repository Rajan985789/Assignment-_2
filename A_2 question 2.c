#include<stdio.h>to p
int main (){
    int a,b;
    char ch;
    
    printf("enter 1st number:");
    scanf("%d",&a);
    
    printf("enter 2nd number:");
    scanf("%d",&b);
    
    printf("enter operation:");
    scanf("\n%c",&ch);
   
    switch(ch){
    case '+' :
    printf("a+b=%d\n",a+b);
    break;
    
    case '-' :
    printf("a-b=%d\n" ,a-b);
    break;
    
    case '*' :
    printf("a*b=%d\n",a*b);
    break;
    
    case '/' :
    printf("a/b=%d\n",a/b);
    break;
    
    default:
    printf("syntax error");
    break;
   }
    return 0;
}
    
    
    
    
    
    
