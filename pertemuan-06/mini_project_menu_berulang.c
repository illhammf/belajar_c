#include <stdio.h>

int main()
{
    int pilihan;
    float angka1, angka2;

    do
    {
        printf("\n===== KALKULATOR =====\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Keluar\n");

        printf("\nPilih Menu : ");
        scanf("%d", &pilihan);

        if (pilihan >= 1 && pilihan <= 4)
        {
            printf("Masukkan Angka Pertama : ");
            scanf("%f", &angka1);

            printf("Masukkan Angka Kedua   : ");
            scanf("%f", &angka2);
        }

        switch (pilihan)
        {
            case 1:
                printf("\nHasil = %.2f\n", angka1 + angka2);
                break;

            case 2:
                printf("\nHasil = %.2f\n", angka1 - angka2);
                break;

            case 3:
                printf("\nHasil = %.2f\n", angka1 * angka2);
                break;

            case 4:
                if (angka2 != 0)
                {
                    printf("\nHasil = %.2f\n", angka1 / angka2);
                }
                else
                {
                    printf("\nError: Pembagian dengan nol tidak diperbolehkan.\n");
                }
                break;

            case 5:
                printf("\nTerima kasih telah menggunakan program.\n");
                break;

            default:
                printf("\nPilihan tidak tersedia.\n");
        }

    } while (pilihan != 5);

    return 0;
}