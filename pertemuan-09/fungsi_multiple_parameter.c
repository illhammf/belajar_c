#include <stdio.h>

float hitungRataRata(float nilai1, float nilai2, float nilai3)
{
    return (nilai1 + nilai2 + nilai3) / 3;
}

int main()
{
    float hasil;

    hasil = hitungRataRata(80, 90, 85);

    printf("Rata-rata: %.2f\n", hasil);

    return 0;
}