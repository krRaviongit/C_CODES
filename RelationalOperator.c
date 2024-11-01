#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a :");
    scanf("%d",&a);
    printf("Enter b :");
    scanf("%d",&b);

    // '0' indicates False and '1' indicates True.

    printf("\n%d == %d is %d\n", a, b, a == b); // use of equal to operator.
    printf("%d != %d is %d", a, b, a != b);    // use of not equal to operator.


return 0;    
}