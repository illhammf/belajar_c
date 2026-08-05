#include <stdio.h>

int main()
{
    int nilai[5];

    printf("=== INPUT DAN OUTPUT ARRAY ===\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Masukkan nilai ke-%d : ", i + 1);
        scanf("%d", &nilai[i]);
    }

    printf("\n===== HASIL =====\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Nilai ke-%d : %d\n", i + 1, nilai[i]);
    }

    return 0;
}