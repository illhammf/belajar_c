#include <stdio.h>

struct Mahasiswa
{
    char nama[50];
    int umur;
    float ipk;
};

int main()
{
    struct Mahasiswa mahasiswa[3] = // Array untuk menyimpan data 3 mahasiswa
    {
        {"Ilham", 20, 3.75},
        {"Budi", 21, 3.50},
        {"Andi", 19, 3.80}
    };

    for (int i = 0; i < 3; i++) // Loop untuk menampilkan data mahasiswa
    {
        printf("\nMahasiswa ke-%d\n", i + 1);
        printf("Nama : %s\n", mahasiswa[i].nama);
        printf("Umur : %d\n", mahasiswa[i].umur);
        printf("IPK  : %.2f\n", mahasiswa[i].ipk);
    }

    return 0;
}