#include<stdio.h>
#include<string.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
    char name[35];
};

int main()
{
    struct Student harry,ravi,jay;
    harry.id=1;
    ravi.id=2;
    jay.id=3;
    harry.marks=500;
    ravi.marks=470;
    jay.marks=469;
    harry.fav_char='p';
    harry.fav_char='q';
    harry.fav_char='w';
    strcpy(ravi.name, "Kumar Ravi");

    printf("Ravi got %d marks\n", harry.marks);
    printf("Ravi's name is : %s\n", ravi.name);

    return 0;

}