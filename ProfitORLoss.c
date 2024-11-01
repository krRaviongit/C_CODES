#include<stdio.h>
int main(){
    float cp,sp,p,l;

    printf("\nEnter cost price: Rs.");
    scanf("%f",&cp);
    printf("\nEnter selling price: Rs.");
    scanf("%f",&sp);

    p=sp-cp;
    l=cp-sp;

    if(p>0)
    {
        printf("\nThe seller made a profit of Rs. %f\n",p);
    }
    if(l>0)
    {
        printf("\nThe seller incurred loss of Rs. %f\n",l);
    }
    if(p==0)
    {
        printf("\nThere is neither profit nor loss\n");
    }
    
return 0;
}