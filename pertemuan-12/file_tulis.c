#include <stdio.h>

// Program untuk menulis data ke dalam file
int main()
{
    FILE *file; // Deklarasi pointer file

    file = fopen("data.txt", "w"); // Membuka file "data.txt" dalam mode tulis

    if (file == NULL)
    {
        printf("File gagal dibuka.\n");
        return 1;
    }

    fprintf(file, "Belajar Bahasa C\n");
    fprintf(file, "Pertemuan 12\n");
    fprintf(file, "File Handling\n");

    fclose(file); 

    printf("Data berhasil disimpan.\n");

    return 0;
}