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
    scanf("%d", &mahasiswa.umur); // &mahasiswa.umur adalah alamat memori dari variabel umur

    printf("Masukkan IPK : ");
    scanf("%f", &mahasiswa.ipk); // &mahasiswa.ipk adalah alamat memori dari variabel ipk

    printf("\n===== DATA MAHASISWA =====\n");

    printf("Nama : %s\n", mahasiswa.nama); // mahasiswa.nama adalah nama mahasiswa yang diinputkan
    printf("Umur : %d\n", mahasiswa.umur); // mahasiswa.umur adalah umur mahasiswa yang diinputkan
    printf("IPK  : %.2f\n", mahasiswa.ipk); // mahasiswa.ipk adalah IPK mahasiswa yang diinputkan

    return 0;
}