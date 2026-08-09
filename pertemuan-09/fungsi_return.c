#include <stdio.h>

int tambah(int a, int b)
{
    return a + b;
}

int main()
{
    int hasil;

    hasil = tambah(10, 20);

    printf("Hasil penjumlahan: %d\n", hasil);

    return 0;
}