#include <stdio.h>

int main()
{
    int umur;

    printf("=== CEK UMUR MEMBUAT SIM ===\n\n");

    printf("Masukkan umur : ");
    scanf("%d", &umur);

    if (umur >= 17)
    {
        printf("Selamat! Kamu sudah memenuhi syarat membuat SIM.\n");
    }

    printf("\nProgram selesai.\n");

    return 0;
}