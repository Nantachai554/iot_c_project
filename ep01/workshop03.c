#include <stdio.h>
void main (){

    int midtermScore = 50;
    int final_score;
    int total_score;
    double gpa = 3.99;

    final_score = 20;
    total_score = midtermScore + final_score;

    printf("Midterm is : %d\n" , midtermScore);
    printf("Final is : %d\n" , final_score);
    printf("total is : %d\n" , total_score);
    printf("My GPA is : %lf\n" , gpa);
    printf("My GPA is : %.2lf\n" , gpa);
    printf("My GPA is : %.4lf\n" , gpa);
    printf("----------------------\n");
    printf("%d + %d = %d ได้เกรด %.2lf\n", midtermScore, final_score, total_score,gpa);
}