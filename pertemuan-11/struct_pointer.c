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
    struct Mahasiswa mahasiswa =
    {
        "Ilham",
        20,
        3.75
    };

    struct Mahasiswa *pointer = &mahasiswa; // Pointer ke struct Mahasiswa

    printf("Nama : %s\n", pointer->nama); // pointer->nama adalah nama mahasiswa yang diakses melalui pointer
    printf("Umur : %d\n", pointer->umur); // pointer->umur adalah umur mahasiswa yang diakses melalui pointer
    printf("IPK  : %.2f\n", pointer->ipk); // pointer->ipk adalah IPK mahasiswa yang diakses melalui pointer

    return 0;
}