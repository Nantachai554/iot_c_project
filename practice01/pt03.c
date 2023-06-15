#include <stdio.h>
#include <conio.h>
#define PA printf("+++++++++++++++++++++++++\n");
void main (){

    float id,salary,total;
    char name[50];

    PA
    printf("Program  Salary  Employee\n");
    PA
    printf("Enter employee id :");
    scanf("%f",&id);
    printf("Enter employee name :");
    scanf("%s",&name);
    printf("Enter employee salary :");
    scanf("%f",&salary);
    PA
    total = salary-salary*7/100-500;
    printf ("Salary total is : %.2f bath",total);
}