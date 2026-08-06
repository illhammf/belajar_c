#include <stdio.h>
#include <string.h>

int main()
{
    char nama[100];

    printf("=== FUNGSI STRLEN ===\n\n");

    printf("Masukkan nama : ");
    fgets(nama, sizeof(nama), stdin); // Membaca input string dari pengguna, termasuk spasi, hingga newline atau batas ukuran array tercapai.

    nama[strcspn(nama, "\n")] = '\0';

    printf("\nPanjang string : %lu karakter\n", strlen(nama)); // strlen() digunakan untuk menghitung panjang string, mengembalikan jumlah karakter sebelum karakter null '\0'.

    return 0;
}