#include <stdio.h>

// Struct Alamat untuk menyimpan data alamat
struct Alamat
{
    char kota[50];
    char provinsi[50];
};

// Struct Mahasiswa untuk menyimpan data mahasiswa, termasuk alamat
struct Mahasiswa
{
    char nama[50];
    int umur;
    float ipk;

    struct Alamat alamat; // Nested struct Alamat di dalam struct Mahasiswa
};

int main()
{
    struct Mahasiswa mahasiswa = // Inisialisasi struct Mahasiswa dengan data contoh, termasuk alamat
    {
        "Ilham",
        20,
        3.75,
        {
            "Bogor",
            "Jawa Barat"
        }
    };

    printf("Nama      : %s\n", mahasiswa.nama);
    printf("Umur      : %d\n", mahasiswa.umur);
    printf("IPK       : %.2f\n", mahasiswa.ipk);
    printf("Kota      : %s\n", mahasiswa.alamat.kota);
    printf("Provinsi  : %s\n", mahasiswa.alamat.provinsi);

    return 0;
}