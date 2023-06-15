#include <stdio.h>
#include <conio.h>

void main(){
    char name[50];
    int age;
    double salary;

	
    printf("Enter your name :");
    scanf("%s" , &name);
    printf("Enter your age :");
    scanf("%d" , &age);
    printf("Enter your salary :");
    scanf("%lf" , &salary);
    printf("++++++++++++\n");
    printf("You are %d years old.\n", age);
    printf("Your salary is %.2lf bath.\n", salary);
    


}