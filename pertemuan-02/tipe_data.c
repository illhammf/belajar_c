#include <stdio.h>

int main()
{
    int umur = 20;
    float tinggi = 170.5;
    double phi = 3.1415926535;
    char nilai = 'A';

    printf("Umur   : %d\n", umur);
    printf("Tinggi : %.1f\n", tinggi);
    printf("Phi    : %.10lf\n", phi);
    printf("Nilai  : %c\n", nilai);

    return 0;
}