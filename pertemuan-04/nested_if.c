#include <stdio.h>

int main()
{
    int umur;
    int punyaSIM;

    printf("=== CEK BOLEH MENGEMUDI ===\n\n");

    printf("Masukkan umur (tahun): ");
    scanf("%d", &umur);

    if (umur >= 17)
    {
        printf("Apakah memiliki SIM?\n");
        printf("1. Ya\n");
        printf("0. Tidak\n");
        printf("Pilihan : ");
        scanf("%d", &punyaSIM);

        if (punyaSIM == 1)
        {
            printf("\nStatus : Boleh Mengemudi\n");
        }
        else
        {
            printf("\nStatus : Belum Boleh Mengemudi (Tidak Memiliki SIM)\n");
        }
    }
    else
    {
        printf("\nStatus : Belum Cukup Umur\n");
    }

    return 0;
}