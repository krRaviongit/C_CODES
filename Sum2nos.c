//sum of two numbers
#include<stdio.h>
int main(){
    int a,b,sum;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    sum=a+b;
    printf("The sum of two numbers is %d\n",sum); //\n is use to break line also called escape sequence
    return 0;
    }