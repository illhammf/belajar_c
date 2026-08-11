#include <stdio.h>

// Program untuk membaca data dari file
int main()
{
    FILE *file; // Deklarasi pointer file

    char nama[50];
    int umur;
    float ipk;

    file = fopen("mahasiswa.txt", "r");

    if (file == NULL)
    {
        printf("File tidak ditemukan.\n");
        return 1;
    }

    fscanf(file, "Nama: %49[^\n]\n", nama);
    fscanf(file, "Umur: %d\n", &umur);
    fscanf(file, "IPK: %f\n", &ipk);

    fclose(file);

    printf("===== DATA MAHASISWA =====\n");
    printf("Nama : %s\n", nama);
    printf("Umur : %d\n", umur);
    printf("IPK  : %.2f\n", ipk);

    return 0;
}