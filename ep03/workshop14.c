#include<stdio.h>
#include<conio.h>
#define LINE printf("########################\n");
void main(){
    int level;
    LINE
    printf("  PROGRAM WELCOME SAU\n");
    LINE
    printf("Input your level :");
    scanf("%d",&level);
    LINE

    switch (level){
    case 1 :    printf("Welcome Freshy.....\n");
                break;
    case 2 :    printf("Welcome Sophomore....\n");
                break;
    case 3 :    printf("Welcome Junior.....\n");
                break;
    case 4 :    printf("Welcome Senior.....\n");
                break;
    default:    printf("ho....no.....\n");
    }
    LINE
}