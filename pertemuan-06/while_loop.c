#include <stdio.h>

// While loop adalah salah satu jenis perulangan yang digunakan untuk mengeksekusi blok kode tertentu beberapa kali. Perulangan ini biasanya digunakan ketika jumlah iterasi belum diketahui sebelumnya. Sintaks dasar dari while loop adalah sebagai berikut:
int main () {

    int i = 1;

    printf("=== PERULANGAN WHILE ===\n\n");

    while (i <= 10) {
        printf("Perulangan ke-%d\n", i);
        i++;
    }

    return 0;
}