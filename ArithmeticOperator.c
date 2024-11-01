#include<stdio.h>
int main(){
    int a,b;

    //taking two nos a and b from user.
    
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);

    //using arithmetic operators on a and b.

    printf("\nThe sum of a and b is %d",a+b);
    printf("\nThe difference of a and b is %d",a-b);
    printf("\nThe product of a and b is %d",a*b);
    printf("\nThe division of a and b is %d",a/b);
    printf("\nThe modulus of a and b is %d",a%b);
    
    return 0;
}