#include <stdio.h>

// Ternanry operator adalah operator yang menggunakan tiga operand. Operator ini biasanya digunakan untuk menggantikan pernyataan if-else sederhana. Sintaks dari operator ternary adalah sebagai berikut:
// (kondisi) ? (nilai jika kondisi benar) : (nilai jika kondisi salah);
int main()
{
    float nilai;

    printf("=== OPERATOR TERNARY ===\n\n");

    printf("Masukkan nilai : ");
    scanf("%f", &nilai);

    printf("\nStatus : %s\n", (nilai >= 75) ? "LULUS" : "TIDAK LULUS");

    return 0;
}