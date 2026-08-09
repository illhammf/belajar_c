#include <stdio.h>

int luasPersegi(int sisi)
{
    return sisi * sisi;
}

int luasPersegiPanjang(int panjang, int lebar)
{
    return panjang * lebar;
}

float luasSegitiga(float alas, float tinggi)
{
    return 0.5 * alas * tinggi;
}

int main()
{
    int sisi = 5;
    int panjang = 10;
    int lebar = 4;

    float alas = 8;
    float tinggi = 6;

    printf("=== MENGHITUNG LUAS ===\n\n");

    printf("Luas Persegi         : %d\n",
           luasPersegi(sisi));

    printf("Luas Persegi Panjang : %d\n",
           luasPersegiPanjang(panjang, lebar));

    printf("Luas Segitiga        : %.2f\n",
           luasSegitiga(alas, tinggi));

    return 0;
}