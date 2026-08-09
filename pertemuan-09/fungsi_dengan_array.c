#include <stdio.h>

void tampilkanArray(int angka[], int jumlah)
{
    for (int i = 0; i < jumlah; i++)
    {
        printf("%d ", angka[i]);
    }

    printf("\n");
}

int hitungTotal(int angka[], int jumlah)
{
    int total = 0;

    for (int i = 0; i < jumlah; i++)
    {
        total += angka[i];
    }

    return total;
}

int main()
{
    int angka[] = {10, 20, 30, 40, 50};
    int jumlah = 5;

    printf("Data Array : ");
    tampilkanArray(angka, jumlah);

    printf("Total      : %d\n", hitungTotal(angka, jumlah));

    return 0;
}