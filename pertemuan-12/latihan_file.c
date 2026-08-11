#include <stdio.h>

struct Mahasiswa
{
    char nama[50];
    int umur;
    float ipk;
};

int main()
{
    struct Mahasiswa mahasiswa[3] =
    {
        {"Ilham", 20, 3.75},
        {"Budi", 21, 3.50},
        {"Andi", 19, 3.90}
    };

    FILE *file;

    file = fopen("data_mahasiswa.txt", "w");

    if (file == NULL)
    {
        printf("File gagal dibuka.\n");
        return 1;
    }

    for (int i = 0; i < 3; i++)
    {
        fprintf(
            file,
            "%s|%d|%.2f\n",
            mahasiswa[i].nama,
            mahasiswa[i].umur,
            mahasiswa[i].ipk
        );
    }

    fclose(file);

    printf("Semua data berhasil disimpan.\n");

    return 0;
}