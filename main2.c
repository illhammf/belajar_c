#include <stdio.h>

int main()
{
    int umur;

    printf("Masukkan umur: ");
    scanf("%d", &umur); // Fungsi scanf() digunakan untuk membaca input dari pengguna. Dalam hal ini, kita membaca sebuah bilangan bulat (integer) dan menyimpannya ke dalam variabel umur. Tanda & digunakan untuk memberikan alamat memori dari variabel umur agar scanf() dapat menyimpan nilai yang dimasukkan oleh pengguna ke dalam variabel tersebut.

    printf("Umur kamu %d", umur); // Fungsi printf() digunakan untuk menampilkan teks ke layar. Dalam hal ini, teks yang ditampilkan adalah "Umur kamu" diikuti oleh nilai dari variabel umur. %d adalah format spesifier yang digunakan untuk menampilkan bilangan bulat (integer).

    return 0;
}