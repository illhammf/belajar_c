#include <stdio.h>

int main()
{
    int angka = 10;

    printf("Nilai Awal : %d\n\n", angka);

    angka += 5;
    printf("Setelah += 5 : %d\n", angka);

    angka -= 3;
    printf("Setelah -= 3 : %d\n", angka);

    angka *= 2;
    printf("Setelah *= 2 : %d\n", angka);

    angka /= 4;
    printf("Setelah /= 4 : %d\n", angka);

    angka %= 3;
    printf("Setelah %%= 3 : %d\n", angka);

    return 0;
}