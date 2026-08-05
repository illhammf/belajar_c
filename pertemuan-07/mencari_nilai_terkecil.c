#include <stdio.h>

int main()
{
    int nilai[5] = {80, 92, 75, 88, 95};
    int terkecil = nilai[0];

    for (int i = 1; i < 5; i++)
    {
        if (nilai[i] < terkecil)
        {
            terkecil = nilai[i];
        }
    }

    printf("Nilai terkecil : %d\n", terkecil);

    return 0;
}