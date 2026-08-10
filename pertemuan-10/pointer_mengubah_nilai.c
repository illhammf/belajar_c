#include <stdio.h>

// Pointer Dasar untuk mengubah nilai dari variabel lain
int main()
{
    int angka = 10;

    int *pointer = &angka;

    printf("Sebelum diubah : %d\n", angka);

    *pointer = 100;

    printf("Setelah diubah : %d\n", angka);

    return 0;
}