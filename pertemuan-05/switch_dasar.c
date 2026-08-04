#include <stdio.h>

int main()
{
    int pilihan;

    printf("=== SWITCH DASAR ===\n\n");

    printf("Masukkan angka (1-3): ");
    scanf("%d", &pilihan);

    switch (pilihan)
    {
        case 1:
            printf("\nKamu memilih angka 1.\n");
            break;

        case 2:
            printf("\nKamu memilih angka 2.\n");
            break;

        case 3:
            printf("\nKamu memilih angka 3.\n");
            break;

        default:
            printf("\nPilihan tidak tersedia.\n");
    }

    return 0;
}