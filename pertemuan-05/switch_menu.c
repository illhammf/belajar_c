#include <stdio.h>

int main()
{
    int menu;

    printf("===== MENU UTAMA =====\n");
    printf("1. Profil\n");
    printf("2. Pengaturan\n");
    printf("3. Bantuan\n");
    printf("4. Keluar\n");

    printf("\nPilih Menu : ");
    scanf("%d", &menu);

    switch (menu)
    {
        case 1:
            printf("\nMembuka Profil...\n");
            break;

        case 2:
            printf("\nMembuka Pengaturan...\n");
            break;

        case 3:
            printf("\nMembuka Bantuan...\n");
            break;

        case 4:
            printf("\nTerima kasih telah menggunakan program.\n");
            break;

        default:
            printf("\nMenu tidak tersedia.\n");
    }

    return 0;
}