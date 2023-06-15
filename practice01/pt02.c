// โจทย์ข้อที่ 2
#include <stdio.h>
#include <conio.h>
#define PA printf("+++++++++++++++++++++++++\n");
void main (){

    float price_begin,sale;
    char name[50];

    PA
    printf("Program  Product  Shop\n");
    PA
    printf("Enter product name :");
    scanf("%s",&name);
    printf("Enter price begin  :");
    scanf("%.2f",&price_begin);
    sale = price_begin - price_begin *10/100;
    printf("Price for sale is : %.2f bath\n ",sale);
    PA


    
}