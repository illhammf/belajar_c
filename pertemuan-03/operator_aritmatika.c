#include <stdio.h>

int main()
{
    int angka1 = 10; // Deklarasi variabel angka1 dengan tipe data integer (bilangan bulat). Variabel ini akan digunakan untuk menyimpan nilai 10.
    int angka2 = 3; // Deklarasi variabel angka2 dengan tipe data integer (bilangan bulat). Variabel ini akan digunakan untuk menyimpan nilai 3.

    printf("=== OPERATOR ARITMATIKA ===\n\n");

    printf("Angka Pertama : %d\n", angka1); // Menampilkan nilai dari variabel angka1 ke layar. %d adalah format spesifier yang digunakan untuk men
    printf("Angka Kedua   : %d\n\n", angka2); // Menampilkan nilai dari variabel angka2 ke layar. %d adalah format spesifier yang digunakan untuk menampilkan bilangan bulat (integer).

    printf("Penjumlahan   : %d\n", angka1 + angka2); // Untuk menampilkan hasil penjumlahan dari angka1 dan angka2 ke layar. %d adalah format spesifier yang digunakan untuk menampilkan bilangan bulat (integer).
    printf("Pengurangan   : %d\n", angka1 - angka2); // Untuk menampilkan hasil pengurangan dari angka1 dan angka2 ke layar. %d adalah format spesifier yang digunakan untuk menampilkan bilangan bulat (integer).
    printf("Perkalian     : %d\n", angka1 * angka2); // Untuk menampilkan hasil perkalian dari angka1 dan angka2 ke layar. %d adalah format spesifier yang digunakan untuk menampilkan bilangan bulat (integer).
    printf("Pembagian     : %d\n", angka1 / angka2); // Untuk menampilkan hasil pembagian dari angka1 dan angka2 ke layar. %d adalah format spesifier yang digunakan untuk menampilkan bilangan bulat (integer).
    printf("Sisa Bagi     : %d\n", angka1 % angka2); // Untuk menampilkan hasil sisa bagi dari angka1 dan angka2 ke layar. %d adalah format spesifier yang digunakan untuk menampilkan bilangan bulat (integer).

    return 0;
}