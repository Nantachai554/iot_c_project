#include <stdio.h>
#include <conio.h>
#define PA printf("+++++++++++++++++++++++++\n");
void main(){

    float widths,longs,area_square,bases,highs,area_sriangle;
    PA
    printf("   Program Area shapes\n");
    PA
    printf("INput widths : ");
    scanf("%f", & widths);
    printf("INput longs  : ");
    scanf("%f",&longs);
    printf("--------------------\n");
    area_square = widths * longs;
    printf("  Square area : %.2f\n ", area_square);
    PA
    printf("INput bases : ");
    scanf("%f", & bases);
    printf("INput highs : ");
    scanf("%f",& highs);
    printf("--------------------\n");
    area_sriangle = bases * highs / 2;
    printf("  sriangle area : %.2f\n ", area_sriangle);
    PA
    getch();
}