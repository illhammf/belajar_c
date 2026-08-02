#include <stdio.h>

int main()
{
    char nama[50];
    int umur;
    float tinggi;

    printf("Masukkan nama   : ");
    scanf("%49s", nama);

    printf("Masukkan umur   : ");
    scanf("%d", &umur);

    printf("Masukkan tinggi : ");
    scanf("%f", &tinggi);

    printf("\n===== BIODATA =====\n");
    printf("Nama    : %s\n", nama);
    printf("Umur    : %d tahun\n", umur);
    printf("Tinggi  : %.1f cm\n", tinggi);

    return 0;
}