#include <stdio.h>

// Struktur data untuk menyimpan informasi mahasiswa
struct Mahasiswa
{
    char nama[50];
    int umur;
    float ipk;
};

// Fungsi utama
int main()
{
    struct Mahasiswa mahasiswa =
    {
        "Ilham",
        20,
        3.75
    };

    FILE *file;

    file = fopen("mahasiswa.dat", "wb");

    if (file == NULL)
    {
        printf("File gagal dibuka.\n");
        return 1;
    }

    fwrite(
        &mahasiswa,
        sizeof(struct Mahasiswa),
        1,
        file
    );

    fclose(file);

    printf("Data berhasil disimpan ke binary file.\n");

    return 0;
}