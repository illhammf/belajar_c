#include <stdio.h>

// For loop adalah salah satu jenis perulangan yang digunakan untuk mengeksekusi blok kode tertentu beberapa kali. Perulangan ini biasanya digunakan ketika jumlah iterasi sudah diketahui sebelumnya. Sintaks dasar dari for loop adalah sebagai berikut:
int main()
{
    int i;

    printf("=== PERULANGAN FOR ===\n\n");

    for (i = 1; i <= 10; i++)
    {
        printf("Perulangan ke-%d\n", i);
    }

    return 0;
}