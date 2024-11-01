/*In a company an employee is paid as under:
If his basic salary is less than rs 1500, then HRA=10% of basic salary and DA=90% of basic salary.If his salary
is either equal to or above rs 1500, then HRA= rs 500 and DA=98% of basic salary. If the employee's salary is
input through keyboard WAP to find his gross salary.*/

#include<stdio.h>
int main(){
    float bs,gs,da,hra;
    printf("Enter basic salary: Rs.");
    scanf("%f",&bs);

    if(bs<1500)
    {
        hra=bs*10/100;
        da=bs*90/100;
    }
    else
    {
        hra=500;
        da=bs*98/100;
    }

    gs=bs+hra+da;
    printf("gross salary=Rs.%f\n",gs);
    return 0;
}