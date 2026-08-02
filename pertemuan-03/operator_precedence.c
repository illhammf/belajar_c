#include <stdio.h>

int main()
{
    int hasil1 = 5 + 2 * 3;
    int hasil2 = (5 + 2) * 3;

    printf("5 + 2 * 3 = %d\n", hasil1); // Menampilkan hasil dari operasi aritmatika 5 + 2 * 3 ke layar. %d adalah format spesifier yang digunakan untuk menampilkan bilangan bulat (integer).
    printf("(5 + 2) * 3 = %d\n", hasil2); // Nilai Prioritas Operator: Menampilkan hasil dari operasi aritmatika (5 + 2) * 3 ke layar. %d adalah format spesifier yang digunakan untuk menampilkan bilangan bulat (integer).

    return 0;
}