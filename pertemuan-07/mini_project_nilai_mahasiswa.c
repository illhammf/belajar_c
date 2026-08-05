#include <stdio.h>

int main()
{
    int nilai[5];
    int jumlah = 0;
    int terbesar, terkecil;
    float rataRata;

    printf("===== SISTEM NILAI MAHASISWA =====\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Masukkan nilai mahasiswa ke-%d : ", i + 1);
        scanf("%d", &nilai[i]);

        jumlah += nilai[i];

        if (i == 0)
        {
            terbesar = nilai[i];
            terkecil = nilai[i];
        }
        else
        {
            if (nilai[i] > terbesar)
            {
                terbesar = nilai[i];
            }

            if (nilai[i] < terkecil)
            {
                terkecil = nilai[i];
            }
        }
    }

    rataRata = (float) jumlah / 5;

    printf("\n========== HASIL ==========\n");
    printf("Daftar Nilai : ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", nilai[i]);
    }

    printf("\n");

    printf("Jumlah Nilai     : %d\n", jumlah);
    printf("Rata-rata        : %.2f\n", rataRata);
    printf("Nilai Tertinggi  : %d\n", terbesar);
    printf("Nilai Terendah   : %d\n", terkecil);

    printf("Status Kelas     : %s\n",
           (rataRata >= 75) ? "LULUS" : "BELUM LULUS");

    printf("===========================\n");

    return 0;
}