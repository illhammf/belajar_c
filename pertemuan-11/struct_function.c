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
    printf("Nama : %s\n", mahasiswa.nama);
    printf("Umur : %d\n", mahasiswa.umur);
    printf("IPK  : %.2f\n", mahasiswa.ipk);
}

int main()
{
    struct Mahasiswa mahasiswa = // Inisialisasi struct Mahasiswa dengan data contoh
    {
        "Ilham",
        20,
        3.75
    };

    tampilkanMahasiswa(mahasiswa); // Memanggil fungsi untuk menampilkan data mahasiswa

    return 0;
}