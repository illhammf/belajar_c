#include <stdio.h>
 
// Pointer Dasar untuk menyimpan alamat dari variabel lain
int main()
{
    int angka = 10;

    int *pointer = &angka;

    printf("Nilai angka       : %d\n", angka);
    printf("Alamat angka      : %p\n", (void *)&angka);
    printf("Nilai pointer     : %p\n", (void *)pointer);
    printf("Nilai dari pointer: %d\n", *pointer);

    return 0;
}