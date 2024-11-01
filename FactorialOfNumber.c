#include<stdio.h>
#include<conio.h>
int main(){
    int i,num,factorial=1;
    printf("Enter a positive number to find its factorial:");
    scanf("%lf",&num);
    for(i=1;i<=num;i++){
        factorial=factorial*i;
    }
    
    printf("The factorial of given number %lf is %d",num,factorial);
    return 0;
}