#include <stdio.h>

int main()
{
    float nilaiUTS, nilaiUAS, rataRata;

    printf("===== HITUNG NILAI MAHASISWA =====\n\n");

    printf("Masukkan Nilai UTS : ");
    scanf("%f", &nilaiUTS);

    printf("Masukkan Nilai UAS : ");
    scanf("%f", &nilaiUAS);

    rataRata = (nilaiUTS + nilaiUAS) / 2;

    printf("\n===== HASIL =====\n");

    printf("Nilai UTS      : %.2f\n", nilaiUTS);
    printf("Nilai UAS      : %.2f\n", nilaiUAS);
    printf("Rata-rata      : %.2f\n", rataRata);

    printf("Lulus (>=75)   : %d\n", rataRata >= 75);

    return 0;
}