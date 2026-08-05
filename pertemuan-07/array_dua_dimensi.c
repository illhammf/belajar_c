#include <stdio.h>
 
// Array dua dimensi adalah array yang memiliki lebih dari satu baris dan kolom. Array ini dapat digunakan untuk menyimpan data dalam bentuk tabel atau matriks. Dalam C, array dua dimensi dideklarasikan dengan menggunakan dua indeks, yaitu indeks baris dan indeks kolom.
int main()
{
    int nilai[2][3] =
    {
        {80, 85, 90},
        {75, 88, 92}
    };

    printf("=== ARRAY DUA DIMENSI ===\n\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", nilai[i][j]);
        }

        printf("\n");
    }

    return 0;
}