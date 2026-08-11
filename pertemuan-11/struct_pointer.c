#include <stdio.h>

// Struct Mahasiswa untuk menyimpan data mahasiswa
struct Mahasiswa
{
    char nama[50];
    int umur;
    float ipk;
};

// Fungsi untuk menampilkan data mahasiswa
void tampilkanMahasiswa(struct Mahasiswa mahasiswa)
{
    printf("Nama : %s\n", mahasiswa.nama); // mahasiswa.nama adalah nama mahasiswa yang diinputkan
    printf("Umur : %d\n", mahasiswa.umur); // mahasiswa.umur adalah umur mahasiswa yang diinputkan
    printf("IPK  : %.2f\n", mahasiswa.ipk); // mahasiswa.ipk adalah IPK mahasiswa yang diinputkan
} 

int main()
{
    struct Mahasiswa mahasiswa =
    {
        "Ilham",
        20,
        3.75
    };

    tampilkanMahasiswa(mahasiswa); // Memanggil fungsi untuk menampilkan data mahasiswa

    return 0;
}