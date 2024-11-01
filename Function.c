#include<stdio.h>
void italy();  //Funtion declaration
void brazil();
void argentina();
int main()
{
    printf("I am in main\n");
    italy();  //Function calling
    brazil();
    argentina();
    return 0;
}
void italy()   //Function definition
{
    printf("I am in Italy\n");
}
void brazil()  
{
    printf("I am in Brazil\n");
}
void argentina()
{
    printf("I am in Argentina\n");
}