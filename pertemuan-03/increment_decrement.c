#include <stdio.h>

int main()
{
    int angka = 10;

    printf("Nilai Awal : %d\n\n", angka);

    angka++;
    printf("Setelah Increment : %d\n", angka); // Increment adalah operasi penambahan 1 pada nilai variabel. Dalam hal ini, nilai awal dari variabel angka adalah 10, dan setelah dilakukan increment, nilai dari variabel angka menjadi 11.

    angka--;
    printf("Setelah Decrement : %d\n\n", angka); // Decrement adalah operasi pengurangan 1 pada nilai variabel. Dalam hal ini, nilai awal dari variabel angka adalah 11 (setelah increment), dan setelah dilakukan decrement, nilai dari variabel angka menjadi 10.

    int x = 5;

    printf("Post Increment (x++) : %d\n", x++); // Post Increment adalah operasi penambahan 1 pada nilai variabel, tetapi nilai yang dikembalikan adalah nilai sebelum increment dilakukan. Dalam hal ini, nilai awal dari variabel x adalah 5, dan setelah dilakukan post increment, nilai dari variabel x menjadi 6, tetapi yang ditampilkan adalah nilai sebelum increment yaitu 5.
    printf("Nilai x Sekarang     : %d\n\n", x);

    int y = 5;

    printf("Pre Increment (++y)  : %d\n", ++y); // Pre Increment adalah operasi penambahan 1 pada nilai variabel, dan nilai yang dikembalikan adalah nilai setelah increment dilakukan. Dalam hal ini, nilai awal dari variabel y adalah 5, dan setelah dilakukan pre increment, nilai dari variabel y menjadi 6, dan yang ditampilkan adalah nilai setelah increment yaitu 6.
    printf("Nilai y Sekarang     : %d\n", y);

    return 0;
}