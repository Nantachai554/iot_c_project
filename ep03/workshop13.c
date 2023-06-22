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

    if (level ==1){
        printf("Welcome Freshy....\n");
    }else if(level ==2){
        printf("Welcome Sophomore....\n");
    }else if (level ==3){
        printf("Welcome Junior....\n");
    }else if (level ==4){
        printf("Welcome Senior....\n");
    }else{
        printf("ho...no.....\n");
    }
    LINE

}