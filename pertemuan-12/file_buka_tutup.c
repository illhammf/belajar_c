#include <stdio.h>

// Program untuk membuka dan menutup file
int main()
{
    FILE *file; // Deklarasi pointer file

    file = fopen("data.txt", "w"); // Membuka file "data.txt" dalam mode tulis

    if (file == NULL)
    {
        printf("File gagal dibuka.\n");
        return 1;
    }

    printf("File berhasil dibuka.\n");

    fclose(file); // Menutup file

    printf("File berhasil ditutup.\n");

    return 0;
}