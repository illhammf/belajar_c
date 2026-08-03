#include <stdio.h>

// Program menentukan apakah sebuah angka adalah bilangan ganjil atau genap. Program ini menggunakan operator modulus (%) untuk memeriksa sisa pembagian angka dengan 2. Jika sisa pembagian adalah 0, maka angka tersebut adalah bilangan genap; jika tidak, maka angka tersebut adalah bilangan ganjil.
int main()
{
    int angka;

    printf("=== CEK GANJIL / GENAP ===\n\n");

    printf("Masukkan angka : ");
    scanf("%d", &angka);

    if (angka % 2 == 0)
    {
        printf("\n%d adalah bilangan Genap\n", angka);
    }
    else
    {
        printf("\n%d adalah bilangan Ganjil\n", angka);
    }

    return 0;
}