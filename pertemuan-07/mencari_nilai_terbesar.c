#include <stdio.h>

int main()
{
    int nilai[5] = {80, 92, 75, 88, 95};
    int terbesar = nilai[0];

    for (int i = 1; i < 5; i++)
    {
        if (nilai[i] > terbesar)
        {
            terbesar = nilai[i];
        }
    }

    printf("Nilai terbesar : %d\n", terbesar);

    return 0;
}