#include<stdio.h>
#include<conio.h>
#define LINE printf("------------------------------\n");
void main(){
    double money,mon;
    char name[20]; 

    LINE
    printf("Program  Benefit of Loan\n");
    LINE
    printf("Enter name of loan  :");
    scanf("%s",&name);
    printf("Enter money of loan :");
    scanf("%lf",&money);
    LINE
    if(money >= 1000){
        mon = money*1.025;
        printf("%lf\n",mon);
    }else {
        mon = money*1.055;
        printf("%lf\n",mon);
    }
    LINE
}