#include <stdio.h>

// Struct Mahasiswa untuk menyimpan data mahasiswa
struct Mahasiswa
{
    char nama[50];
    int umur;
    float ipk;
};

int main()
{
    struct Mahasiswa mahasiswa1 = {
        "Ilham",
        20,
        3.75
    };

    printf("Nama : %s\n", mahasiswa1.nama);
    printf("Umur : %d\n", mahasiswa1.umur);
    printf("IPK  : %.2f\n", mahasiswa1.ipk);

    return 0;
}