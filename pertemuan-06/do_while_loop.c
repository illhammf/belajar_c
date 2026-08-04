#include <stdio.h>

// Do while loop adalah salah satu jenis perulangan yang digunakan untuk mengeksekusi blok kode tertentu beberapa kali. Perulangan ini biasanya digunakan ketika kita ingin mengeksekusi blok kode setidaknya satu kali, dan kemudian memeriksa kondisi untuk menentukan apakah perulangan akan dilanjutkan atau tidak. Sintaks dasar dari do while loop adalah sebagai berikut:
int main()
{
    int i = 1;

    printf("=== PERULANGAN DO WHILE ===\n\n");

    do
    {
        printf("Perulangan ke-%d\n", i);
        i++;
    }
    while (i <= 10);

    return 0;
}