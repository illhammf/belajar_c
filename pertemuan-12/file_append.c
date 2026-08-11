#include <stdio.h>

// Program untuk menambahkan data ke dalam file
int main()
{
    FILE *file; // Deklarasi pointer file

    file = fopen("data.txt", "a"); // Membuka file "data.txt" dalam mode tambah

    if (file == NULL)
    {
        printf("File gagal dibuka.\n");
        return 1;
    }

    fprintf(file, "Pointer\n");
    fprintf(file, "Structure\n");
    fprintf(file, "Function\n");

    fclose(file);

    printf("Data berhasil ditambahkan.\n");

    return 0;
}