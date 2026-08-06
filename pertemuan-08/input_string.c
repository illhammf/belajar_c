#include <stdio.h>
#include <string.h>

int main()
{
    char nama[100];

    printf("=== INPUT STRING ===\n\n");

    printf("Masukkan nama lengkap : ");
    fgets(nama, sizeof(nama), stdin); // Membaca input string dari pengguna, termasuk spasi, hingga newline atau batas ukuran array tercapai.

    nama[strcspn(nama, "\n")] = '\0'; // Menghapus karakter newline '\n' yang ditambahkan oleh fgets() di akhir string.

    printf("\nNama Anda : %s\n", nama);

    return 0;
}