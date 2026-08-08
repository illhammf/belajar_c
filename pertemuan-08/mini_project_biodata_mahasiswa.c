#include <stdio.h>
#include <string.h>

// Projek mini ini adalah program untuk menginput dan menampilkan biodata mahasiswa. Program ini menggunakan fungsi-fungsi string dari pustaka string.h untuk memanipulasi string, seperti fgets() untuk membaca input string, strcspn() untuk menghapus karakter newline, dan printf() untuk menampilkan output.
int main()
{
    char nama[100];
    char nim[20];
    char prodi[100];
    char fakultas[100];
    char alamat[150];
    char telepon[20];

    printf("===== SISTEM BIODATA MAHASISWA =====\n\n");

    printf("Nama Lengkap : ");
    fgets(nama, sizeof(nama), stdin);
    nama[strcspn(nama, "\n")] = '\0';

    printf("NIM          : ");
    fgets(nim, sizeof(nim), stdin);
    nim[strcspn(nim, "\n")] = '\0';

    printf("Program Studi: ");
    fgets(prodi, sizeof(prodi), stdin);
    prodi[strcspn(prodi, "\n")] = '\0';

    printf("Fakultas     : ");
    fgets(fakultas, sizeof(fakultas), stdin);
    fakultas[strcspn(fakultas, "\n")] = '\0';

    printf("Alamat       : ");
    fgets(alamat, sizeof(alamat), stdin);
    alamat[strcspn(alamat, "\n")] = '\0';

    printf("No. Telepon  : ");
    fgets(telepon, sizeof(telepon), stdin);
    telepon[strcspn(telepon, "\n")] = '\0';

    printf("\n========== BIODATA ==========\n");
    printf("Nama Lengkap : %s\n", nama);
    printf("NIM          : %s\n", nim);
    printf("Program Studi: %s\n", prodi);
    printf("Fakultas     : %s\n", fakultas);
    printf("Alamat       : %s\n", alamat);
    printf("No. Telepon  : %s\n", telepon);
    printf("=============================\n");

    return 0;
}