#include <stdio.h>

int main()
{
    int angka = 10;

    printf("Nilai Awal : %d\n\n", angka);

    angka++;
    printf("Setelah Increment : %d\n", angka);

    angka--;
    printf("Setelah Decrement : %d\n\n", angka);

    int x = 5;

    printf("Post Increment (x++) : %d\n", x++);
    printf("Nilai x Sekarang     : %d\n\n", x);

    int y = 5;

    printf("Pre Increment (++y)  : %d\n", ++y);
    printf("Nilai y Sekarang     : %d\n", y);

    return 0;
}