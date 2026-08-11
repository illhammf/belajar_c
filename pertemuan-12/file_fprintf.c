#include <stdio.h>

int main()
{
    FILE *file; // Deklarasi pointer file

    char nama[] = "Ilham";
    int umur = 20;
    float ipk = 3.75;

    file = fopen("mahasiswa.txt", "w");

    if (file == NULL)
    {
        printf("File gagal dibuka.\n");
        return 1;
    }

    fprintf(file, "Nama: %s\n", nama);
    fprintf(file, "Umur: %d\n", umur);
    fprintf(file, "IPK: %.2f\n", ipk);

    fclose(file);

    printf("Data mahasiswa berhasil disimpan.\n");

    return 0;
}