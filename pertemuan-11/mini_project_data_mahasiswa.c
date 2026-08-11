#include <stdio.h>
#include <string.h> // Diperlukan untuk fungsi strcmp

#define MAX_MAHASISWA 100 // Maksimal jumlah mahasiswa yang dapat disimpan

// Struct Mahasiswa untuk menyimpan data mahasiswa
struct Mahasiswa
{
    char nim[20];
    char nama[50];
    char jurusan[50];
    float ipk;
};

// Fungsi untuk menambahkan data mahasiswa
void tambahData(struct Mahasiswa mahasiswa[], int *jumlah)
{
    if (*jumlah >= MAX_MAHASISWA) // Cek apakah jumlah mahasiswa sudah mencapai batas maksimal
    {
        printf("\nData mahasiswa sudah penuh.\n");
        return;
    }

    printf("\n===== TAMBAH DATA =====\n");

    printf("NIM      : ");
    scanf(" %19[^\n]", mahasiswa[*jumlah].nim); // Membaca input NIM dengan batas maksimal 19 karakter

    printf("Nama     : ");
    scanf(" %49[^\n]", mahasiswa[*jumlah].nama);

    printf("Jurusan  : ");
    scanf(" %49[^\n]", mahasiswa[*jumlah].jurusan);

    printf("IPK      : ");
    scanf("%f", &mahasiswa[*jumlah].ipk);

    (*jumlah)++; // Increment jumlah mahasiswa setelah menambahkan data baru

    printf("\nData berhasil ditambahkan.\n");
}

// Fungsi untuk menampilkan data mahasiswa
void tampilkanData(struct Mahasiswa mahasiswa[], int jumlah)
{
    if (jumlah == 0)
    {
        printf("\nBelum ada data mahasiswa.\n");
        return;
    }

    printf("\n===== DATA MAHASISWA =====\n");

    for (int i = 0; i < jumlah; i++) // Loop untuk menampilkan data mahasiswa
    {
        printf("\nMahasiswa ke-%d\n", i + 1);
        printf("NIM      : %s\n", mahasiswa[i].nim);
        printf("Nama     : %s\n", mahasiswa[i].nama);
        printf("Jurusan  : %s\n", mahasiswa[i].jurusan);
        printf("IPK      : %.2f\n", mahasiswa[i].ipk);
    }
}

// Fungsi untuk mencari mahasiswa berdasarkan nama
void cariMahasiswa(struct Mahasiswa mahasiswa[], int jumlah)
{
    char keyword[50];
    int ditemukan = 0;

    printf("\nMasukkan nama mahasiswa: ");
    scanf(" %49[^\n]", keyword);

    for (int i = 0; i < jumlah; i++)
    {
        if (strcmp(mahasiswa[i].nama, keyword) == 0)
        {
            printf("\nData ditemukan!\n");
            printf("NIM      : %s\n", mahasiswa[i].nim);
            printf("Nama     : %s\n", mahasiswa[i].nama);
            printf("Jurusan  : %s\n", mahasiswa[i].jurusan);
            printf("IPK      : %.2f\n", mahasiswa[i].ipk);

            ditemukan = 1;
            break;
        }
    }

    if (!ditemukan)
    {
        printf("\nMahasiswa tidak ditemukan.\n");
    }
}

// Fungsi untuk mencari mahasiswa dengan IPK tertinggi
void cariIPKTertinggi(struct Mahasiswa mahasiswa[], int jumlah)
{
    if (jumlah == 0)
    {
        printf("\nBelum ada data mahasiswa.\n");
        return;
    }

    int indexTerbesar = 0;

    for (int i = 1; i < jumlah; i++)
    {
        if (mahasiswa[i].ipk > mahasiswa[indexTerbesar].ipk)
        {
            indexTerbesar = i;
        }
    }

    printf("\n===== IPK TERTINGGI =====\n");

    printf("NIM      : %s\n", mahasiswa[indexTerbesar].nim);
    printf("Nama     : %s\n", mahasiswa[indexTerbesar].nama);
    printf("Jurusan  : %s\n", mahasiswa[indexTerbesar].jurusan);
    printf("IPK      : %.2f\n", mahasiswa[indexTerbesar].ipk);
}

// Fungsi untuk menampilkan menu utama
void tampilkanMenu()
{
    printf("\n===== DATA MAHASISWA =====\n");
    printf("1. Tambah Data\n");
    printf("2. Tampilkan Data\n");
    printf("3. Cari Mahasiswa\n");
    printf("4. Cari IPK Tertinggi\n");
    printf("5. Keluar\n");
    printf("==========================\n");
}

int main()
{
    struct Mahasiswa mahasiswa[MAX_MAHASISWA]; // Array untuk menyimpan data mahasiswa

    int jumlah = 0;
    int pilihan;

    do
    {
        tampilkanMenu();

        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        switch (pilihan)
        {
            case 1:
                tambahData(mahasiswa, &jumlah);
                break;

            case 2:
                tampilkanData(mahasiswa, jumlah);
                break;

            case 3:
                if (jumlah == 0)
                {
                    printf("\nBelum ada data mahasiswa.\n");
                }
                else
                {
                    cariMahasiswa(mahasiswa, jumlah);
                }
                break;

            case 4:
                cariIPKTertinggi(mahasiswa, jumlah);
                break;

            case 5:
                printf("\nProgram selesai.\n");
                break;

            default:
                printf("\nPilihan tidak valid.\n");
        }

    } while (pilihan != 5); // Looping menu utama hingga pengguna memilih untuk keluar

    return 0;
}