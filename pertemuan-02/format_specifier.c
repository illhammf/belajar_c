#include <stdio.h>

int main()
{
    int umur = 20;
    float tinggi = 170.5;
    double berat = 65.25;
    char nilai = 'A';

    printf("%d\n", umur);
    printf("%.1f\n", tinggi); // Angka desimal ditampilkan dengan 1 angka di belakang koma
    printf("%.2lf\n", berat); // Angka desimal ditampilkan dengan 2 angka di belakang koma
    printf("%c\n", nilai);

    return 0;
}