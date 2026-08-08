#include <stdio.h>
#include <string.h>

int main()
{
    char sumber[] = "Belajar Bahasa C";
    char tujuan[100];

    strcpy(tujuan, sumber); // strcpy() digunakan untuk menyalin string dari sumber ke tujuan, termasuk karakter null '\0' di akhir string

    printf("=== FUNGSI STRCPY ===\n\n");
    printf("String Asal : %s\n", sumber);
    printf("String Hasil Salinan : %s\n", tujuan);

    return 0;
}