#include<stdio.h>
int main(){
    int yr;
    printf("\nEnter a year:");
    scanf("%d",&yr);

    if(yr%100==0) //To check a century year that ends with 00,then it should be divisible by 400 to be leap year.
    {
        if(yr%400==0)
        {
            printf("Leap Year\n");
        }
        else
        {
            printf("Not a Leap Year\n");
        }
    }
    else
    {
        if(yr%4==0) //Non Century years must be divisible by 4 to be leap year.
        {
            printf("Leap Year\n");
        }
        else
        {
            printf("Not a Leap Year\n");
        }
    }
return 0;   
}