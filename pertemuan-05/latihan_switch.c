#include <stdio.h>

int main()
{
    int pilihan;

    printf("===== MENU MAKANAN =====\n");
    printf("1. Nasi Goreng\n");
    printf("2. Mie Ayam\n");
    printf("3. Bakso\n");
    printf("4. Soto Ayam\n");

    printf("\nPilih Menu : ");
    scanf("%d", &pilihan);

    switch (pilihan)
    {
        case 1:
            printf("\nKamu memilih Nasi Goreng.\n");
            break;

        case 2:
            printf("\nKamu memilih Mie Ayam.\n");
            break;

        case 3:
            printf("\nKamu memilih Bakso.\n");
            break;

        case 4:
            printf("\nKamu memilih Soto Ayam.\n");
            break;

        default:
            printf("\nMenu tidak tersedia.\n");
    }

    return 0;
}