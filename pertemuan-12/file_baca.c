#include <stdio.h>

// Program untuk membaca isi file
int main()
{
    FILE *file;
    char buffer[100]; // Buffer untuk menyimpan isi file

    file = fopen("data.txt", "r");

    if (file == NULL)
    {
        printf("File tidak ditemukan.\n");
        return 1;
    }

    printf("===== ISI FILE =====\n");

    while (fgets(buffer, sizeof(buffer), file) != NULL)
    {
        printf("%s", buffer); // Menampilkan isi file ke layar
    }

    fclose(file);

    return 0;
}