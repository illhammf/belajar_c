#include <stdio.h>

struct Mahasiswa
{
    char nama[50];
    int umur;
    float ipk;
};

int main()
{
    struct Mahasiswa mahasiswa;

    printf("Masukkan nama : ");
    scanf(" %[^\n]", mahasiswa.nama);

    printf("Masukkan umur : ");
    scanf("%d", &mahasiswa.umur);

    printf("Masukkan IPK : ");
    scanf("%f", &mahasiswa.ipk);

    printf("\n===== DATA MAHASISWA =====\n");

    printf("Nama : %s\n", mahasiswa.nama);
    printf("Umur : %d\n", mahasiswa.umur);
    printf("IPK  : %.2f\n", mahasiswa.ipk);

    return 0;
}