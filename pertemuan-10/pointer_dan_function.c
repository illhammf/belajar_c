#include <stdio.h>
 
// Fungsi untuk mengubah nilai dari variabel yang diakses melalui pointer
void ubahNilai(int *angka)
{
    *angka = 100;
}

// Untuk mengubah nilai dari variabel yang diakses melalui pointer
int main()
{
    int nilai = 10;

    printf("Sebelum : %d\n", nilai);

    ubahNilai(&nilai);

    printf("Sesudah : %d\n", nilai);

    return 0;
}