#include <stdio.h>

int main()
{
    char nama[50];
    float tugas, uts, uas, nilaiAkhir;

    printf("===== SISTEM PENILAIAN MAHASISWA =====\n\n");

    printf("Masukkan Nama           : ");
    scanf(" %49[^\n]", nama);

    printf("Masukkan Nilai Tugas    : ");
    scanf("%f", &tugas);

    printf("Masukkan Nilai UTS      : ");
    scanf("%f", &uts);

    printf("Masukkan Nilai UAS      : ");
    scanf("%f", &uas);

    nilaiAkhir = (tugas * 0.30f) + (uts * 0.30f) + (uas * 0.40f);

    char grade;

    if (nilaiAkhir >= 90)
        grade = 'A';
    else if (nilaiAkhir >= 80)
        grade = 'B';
    else if (nilaiAkhir >= 70)
        grade = 'C';
    else if (nilaiAkhir >= 60)
        grade = 'D';
    else
        grade = 'E';

    printf("\n========== HASIL ==========\n");
    printf("Nama         : %s\n", nama);
    printf("Nilai Akhir  : %.2f\n", nilaiAkhir);
    printf("Grade        : %c\n", grade);
    printf("Status       : %s\n",
           (nilaiAkhir >= 75) ? "LULUS" : "TIDAK LULUS");
    printf("===========================\n");

    return 0;
}