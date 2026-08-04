#include <stdio.h>

// Nested loop adalah salah satu jenis perulangan yang digunakan untuk mengeksekusi blok kode tertentu beberapa kali. Perulangan ini biasanya digunakan ketika kita ingin melakukan perulangan di dalam perulangan. Sintaks dasar dari nested loop adalah sebagai berikut:
int main()
{
    int baris, kolom;

    printf("=== NESTED LOOP ===\n\n");

    for (baris = 1; baris <= 5; baris++)
    {
        for (kolom = 1; kolom <= 5; kolom++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}