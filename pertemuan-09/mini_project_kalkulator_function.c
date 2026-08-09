#include <stdio.h>

int tambah(int a, int b)
{
    return a + b;
}

int kurang(int a, int b)
{
    return a - b;
}

int kali(int a, int b)
{
    return a * b;
}

float bagi(float a, float b)
{
    return a / b;
}

void tampilkanMenu()
{
    printf("\n===== KALKULATOR =====\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("5. Keluar\n");
    printf("======================\n");
}

int main()
{
    int pilihan;
    int angka1;
    int angka2;

    do
    {
        tampilkanMenu();

        printf("Pilih menu : ");
        scanf("%d", &pilihan);

        if (pilihan >= 1 && pilihan <= 4)
        {
            printf("Masukkan angka pertama : ");
            scanf("%d", &angka1);

            printf("Masukkan angka kedua   : ");
            scanf("%d", &angka2);
        }

        switch (pilihan)
        {
            case 1:
                printf("Hasil : %d\n",
                       tambah(angka1, angka2));
                break;

            case 2:
                printf("Hasil : %d\n",
                       kurang(angka1, angka2));
                break;

            case 3:
                printf("Hasil : %d\n",
                       kali(angka1, angka2));
                break;

            case 4:

                if (angka2 == 0)
                {
                    printf("Error: Tidak dapat membagi dengan 0.\n");
                }
                else
                {
                    printf("Hasil : %.2f\n",
                           bagi(angka1, angka2));
                }

                break;

            case 5:
                printf("Program selesai.\n");
                break;

            default:
                printf("Pilihan tidak valid.\n");
        }

    } while (pilihan != 5);

    return 0;
}