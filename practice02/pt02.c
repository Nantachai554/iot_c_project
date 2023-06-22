#include<stdio.h>
#include<conio.h>
#define LINE printf("++++++++++++++++++++++++\n");
void main(){
    char name[20],car_number[20];
    double hour,pay;
    LINE
    printf("Program  Rent Taxi\n");
    LINE
    printf("Enter  name for rent :");
    scanf("%s",&name);
    printf("Enter  car number for rent :");
    scanf("%lf",car_number);
    printf("Enter  hour for rent :");
    scanf("%lf",hour);
    LINE

    if(hour <=5){
        pay = hour *100;
        printf("\n",pay);
    }else if(hour <=10){
        pay = hour *90.5;
        printf("Pay forrent is : %lf bath\n",pay);
    }else if(hour <=15){
        pay = hour *80;
        printf("Pay forrent is : %lf bath\n",pay);
    }else {
        pay = hour *70.5;
        printf("Pay forrent is : %lf bath\n",pay);
    }
    LINE
}