#include <stdio.h>

int main()
{
    int nilai[5] = {80, 85, 90, 75, 70};
    int jumlah = 0;
    float rataRata;

    for (int i = 0; i < 5; i++)
    {
        jumlah += nilai[i];
    }

    rataRata = (float) jumlah / 5;

    printf("Jumlah Nilai : %d\n", jumlah);
    printf("Rata-rata    : %.2f\n", rataRata);

    return 0;
}