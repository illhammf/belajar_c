#include <stdio.h>
#include <string.h>

int main()
{
    char nama[100];
    char hobi[100];

    printf("=== LATIHAN STRING ===\n\n");

    printf("Masukkan Nama : ");
    fgets(nama, sizeof(nama), stdin);
    nama[strcspn(nama, "\n")] = '\0';

    printf("Masukkan Hobi : ");
    fgets(hobi, sizeof(hobi), stdin);
    hobi[strcspn(hobi, "\n")] = '\0';

    printf("\n===== HASIL =====\n");
    printf("Nama : %s\n", nama);
    printf("Hobi : %s\n", hobi);

    return 0;
}