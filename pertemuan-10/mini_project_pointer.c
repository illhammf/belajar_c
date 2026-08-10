#include <stdio.h>

// Fungsi untuk menampilkan nilai-nilai dari array menggunakan pointer
void tampilkanNilai(int *nilai, int jumlah)
{
    printf("\nData Nilai:\n");

    for (int i = 0; i < jumlah; i++)
    {
        printf("Nilai ke-%d : %d\n", i + 1, *(nilai + i));
    }
}

// Fungsi untuk menghitung total dari nilai-nilai dalam array menggunakan pointer
int hitungTotal(int *nilai, int jumlah)
{
    int total = 0;

    for (int i = 0; i < jumlah; i++)
    {
        total += *(nilai + i);
    }

    return total;
}

// Fungsi untuk menghitung rata-rata dari nilai-nilai dalam array menggunakan pointer
float hitungRataRata(int *nilai, int jumlah)
{
    int total = hitungTotal(nilai, jumlah);

    return (float) total / jumlah;
}

// Fungsi untuk mencari nilai terbesar dalam array menggunakan pointer
int cariTerbesar(int *nilai, int jumlah)
{
    int terbesar = *nilai;

    for (int i = 1; i < jumlah; i++)
    {
        if (*(nilai + i) > terbesar)
        {
            terbesar = *(nilai + i);
        }
    }

    return terbesar;
}

// Fungsi untuk mencari nilai terkecil dalam array menggunakan pointer
int cariTerkecil(int *nilai, int jumlah)
{
    int terkecil = *nilai;

    for (int i = 1; i < jumlah; i++)
    {
        if (*(nilai + i) < terkecil)
        {
            terkecil = *(nilai + i);
        }
    }

    return terkecil;
}


// Fungsi utama untuk menjalankan program
int main()
{
    int nilai[] = {80, 75, 90, 85, 95};

    int jumlah = 5;

    tampilkanNilai(nilai, jumlah);

    printf("\n===== HASIL =====\n");

    printf("Total        : %d\n",
           hitungTotal(nilai, jumlah));

    printf("Rata-rata    : %.2f\n",
           hitungRataRata(nilai, jumlah));

    printf("Nilai terbesar : %d\n",
           cariTerbesar(nilai, jumlah));

    printf("Nilai terkecil : %d\n",
           cariTerkecil(nilai, jumlah));

    return 0;
}