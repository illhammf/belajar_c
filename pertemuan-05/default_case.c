#include <stdio.h>

int main()
{
    int bulan;

    printf("=== CEK BULAN ===\n\n");

    printf("Masukkan nomor bulan (1-12): ");
    scanf("%d", &bulan);

    switch (bulan)
    {
        case 1:
            printf("Januari\n");
            break;

        case 2:
            printf("Februari\n");
            break;

        case 3:
            printf("Maret\n");
            break;

        default:
            printf("Nomor bulan tidak tersedia pada contoh ini.\n");
    }

    return 0;
}