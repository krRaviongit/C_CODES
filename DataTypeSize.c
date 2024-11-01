#include<stdio.h>
int main(){
    int integerType;
    char charType;
    float floatType;
    double doubleType;

    printf("\nSize of int is: %d",sizeof(integerType)); //sizeof()function evaluates size of variable.
    printf("\nSize of char is: %d",sizeof(charType));
    printf("\nSize of float is: %d",sizeof(floatType));
    printf("\nSize of double is: %d",sizeof(doubleType));
    
    return 0;
}