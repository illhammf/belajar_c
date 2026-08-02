#include <stdio.h>

int main()
{
    int umur = 20;
    int punyaSIM = 1;

    printf("=== OPERATOR LOGIKA ===\n\n");

    printf("Umur      : %d\n", umur);
    printf("Punya SIM : %d\n\n", punyaSIM);

    printf("Boleh Mengemudi : %d\n", umur >= 17 && punyaSIM);
    printf("Umur >= 17      : %d\n", umur >= 17);
    printf("Tidak Punya SIM : %d\n", !punyaSIM);

    return 0;
}