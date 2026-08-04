#include <stdio.h>

int main()
{
    int pilihan;
    float angka1, angka2, hasil;

    printf("===== KALKULATOR SEDERHANA =====\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Keluar\n");

    printf("\nPilih Operasi : ");
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
            hasil = angka1 + angka2;
            printf("\nHasil Penjumlahan : %.2f\n", hasil);
            break;

        case 2:
            hasil = angka1 - angka2;
            printf("\nHasil Pengurangan : %.2f\n", hasil);
            break;

        case 3:
            hasil = angka1 * angka2;
            printf("\nHasil Perkalian : %.2f\n", hasil);
            break;

        case 4:
            if (angka2 != 0)
            {
                hasil = angka1 / angka2;
                printf("\nHasil Pembagian : %.2f\n", hasil);
            }
            else
            {
                printf("\nError: Tidak bisa membagi dengan nol!\n");
            }
            break;

        case 5:
            printf("\nTerima kasih telah menggunakan kalkulator.\n");
            break;

        default:
            printf("\nPilihan tidak tersedia.\n");
    }

    return 0;
}