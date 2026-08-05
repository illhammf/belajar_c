#include <stdio.h>

int main()
{
    int angka[10];
    int jumlah = 0;

    printf("=== JUMLAH DATA ARRAY ===\n\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Masukkan angka ke-%d : ", i + 1);
        scanf("%d", &angka[i]);

        jumlah += angka[i];
    }

    printf("\nJumlah seluruh angka = %d\n", jumlah);

    return 0;
}