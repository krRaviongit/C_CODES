#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a :");
    scanf("%d",&a);
    printf("Enter b :");
    scanf("%d",&b);

     printf("\nOutput = %d", a & b); // Bitwise AND Operator.

     printf("\nOutput = %d", a | b); // Bitwise OR Operator.

     printf("\nOutput = %d", a ^ b); // Bitwise XOR Operator(Exclusive OR).

     printf("\nOutput = %d\n", ~a);  // Bitwise Complement Operator.
     printf("Output = %d", ~b);

}