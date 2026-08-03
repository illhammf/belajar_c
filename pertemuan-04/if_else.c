#include <stdio.h>

int main()
{
    float nilai;

    printf("=== CEK KELULUSAN ===\n\n");

    printf("Masukkan nilai : ");
    scanf("%f", &nilai);

    if (nilai >= 75)
    {
        printf("\nStatus : LULUS\n");
    }
    else
    {
        printf("\nStatus : TIDAK LULUS\n");
    }

    return 0;
}