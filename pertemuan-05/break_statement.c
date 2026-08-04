#include <stdio.h>

int main()
{
    int pilihan;

    printf("=== CONTOH BREAK ===\n\n");

    printf("Masukkan angka (1-2): ");
    scanf("%d", &pilihan);

    switch (pilihan)
    {
        case 1:
            printf("Case 1 dijalankan.\n");
            break;

        case 2:
            printf("Case 2 dijalankan.\n");
            break;

        default:
            printf("Pilihan tidak tersedia.\n");
    }

    return 0;
}