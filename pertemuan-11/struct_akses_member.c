#include <stdio.h>

// Struct untuk menyimpan data produk
struct Produk
{
    char nama[50];
    float harga;
    int stok;
};

int main()
{
    struct Produk produk; // Deklarasi variabel produk bertipe struct Produk

    snprintf(produk.nama, sizeof(produk.nama), "Laptop"); // Mengisi nama produk dengan "Laptop"
    produk.harga = 7500000;
    produk.stok = 10;

    printf("Nama  : %s\n", produk.nama);
    printf("Harga : %.2f\n", produk.harga);
    printf("Stok  : %d\n", produk.stok);

    printf("\nMengubah stok...\n");

    produk.stok = 8;

    printf("Stok sekarang : %d\n", produk.stok);

    return 0;
}