#include<stdio.h>
int main()
{
    int i,j,space;
    for(i=1;i<=20;i++)
    {
        for(space=1;space<=(20-i);space++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}