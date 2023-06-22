#include<stdio.h>
#include<conio.h>
#define PA printf("++++++++++++++++++++\n");
void main(){
//int %d,float %f,double #lf,char[] %s,char %c
    char car_number[20];//->%s
    double car_weight; //->%lf
    PA
    printf("    Program Truck \n");
    PA
    printf("Input car number :");
    scanf("%s",&car_number);
    printf("Input car weight :");
    scanf("%lf",&car_weight);
    PA
    if(car_weight <= 2500 ){
        printf("+   PASS....^_^    +\n");

    }else{ 
        printf("+  NOT PASS....T_T +\n");
    }
    PA


    getch();
}