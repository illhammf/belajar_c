#include <stdio.h>

struct Alamat
{
    char kota[50];
    char provinsi[50];
};

struct Mahasiswa
{
    char nama[50];
    int umur;
    float ipk;

    struct Alamat alamat;
};

int main()
{
    struct Mahasiswa mahasiswa =
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