#include <stdio.h>
#include <string.h>

int main()
{
    char password[50];

    printf("=== CEK PASSWORD ===\n\n");

    printf("Masukkan password : ");
    fgets(password, sizeof(password), stdin);

    password[strcspn(password, "\n")] = '\0';

    if (strcmp(password, "admin123") == 0) // strcmp() digunakan untuk membandingkan dua string. Jika kedua string sama, fungsi ini mengembalikan nilai 0. Jika tidak sama, akan mengembalikan nilai negatif atau positif tergantung pada urutan karakter dalam string.
    {
        printf("\nLogin berhasil.\n");
    }
    else
    {
        printf("\nPassword salah.\n");
    }

    return 0;
}