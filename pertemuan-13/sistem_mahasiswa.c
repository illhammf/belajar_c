#include <stdio.h>
#include <string.h>

#define MAX_MAHASISWA 100
#define FILE_DATA "data_mahasiswa.txt"

struct Mahasiswa
{
    char nim[20];
    char nama[50];
    char jurusan[50];
    float ipk;
};

/* ==============================
   TAMBAH DATA
   ============================== */

void tambahData(struct Mahasiswa mahasiswa[], int *jumlah)
{
    if (*jumlah >= MAX_MAHASISWA)
    {
        printf("\nData mahasiswa sudah penuh.\n");
        return;
    }

    printf("\n===== TAMBAH DATA =====\n");

    printf("NIM     : ");
    scanf(" %19[^\n]", mahasiswa[*jumlah].nim);

    printf("Nama    : ");
    scanf(" %49[^\n]", mahasiswa[*jumlah].nama);

    printf("Jurusan : ");
    scanf(" %49[^\n]", mahasiswa[*jumlah].jurusan);

    printf("IPK     : ");
    scanf("%f", &mahasiswa[*jumlah].ipk);

    if (mahasiswa[*jumlah].ipk < 0 ||
        mahasiswa[*jumlah].ipk > 4)
    {
        printf("\nIPK tidak valid. Harus 0 - 4.\n");
        return;
    }

    (*jumlah)++;

    printf("\nData berhasil ditambahkan.\n");
}

/* ==============================
   TAMPILKAN DATA
   ============================== */

void tampilkanData(
    struct Mahasiswa mahasiswa[],
    int jumlah
)
{
    if (jumlah == 0)
    {
        printf("\nBelum ada data mahasiswa.\n");
        return;
    }

    printf("\n===== DATA MAHASISWA =====\n");

    for (int i = 0; i < jumlah; i++)
    {
        printf("\nMahasiswa ke-%d\n", i + 1);
        printf("-------------------------\n");
        printf("NIM     : %s\n", mahasiswa[i].nim);
        printf("Nama    : %s\n", mahasiswa[i].nama);
        printf("Jurusan : %s\n", mahasiswa[i].jurusan);
        printf("IPK     : %.2f\n", mahasiswa[i].ipk);
    }
}

/* ==============================
   CARI MAHASISWA
   ============================== */

int cariIndexByNIM(
    struct Mahasiswa mahasiswa[],
    int jumlah,
    const char nim[]
)
{
    for (int i = 0; i < jumlah; i++)
    {
        if (strcmp(mahasiswa[i].nim, nim) == 0)
        {
            return i;
        }
    }

    return -1;
}

void cariMahasiswa(
    struct Mahasiswa mahasiswa[],
    int jumlah
)
{
    char nim[20];

    printf("\n===== CARI MAHASISWA =====\n");

    printf("Masukkan NIM: ");
    scanf(" %19[^\n]", nim);

    int index = cariIndexByNIM(
        mahasiswa,
        jumlah,
        nim
    );

    if (index == -1)
    {
        printf("\nMahasiswa tidak ditemukan.\n");
        return;
    }

    printf("\nData ditemukan!\n");
    printf("-------------------------\n");
    printf("NIM     : %s\n", mahasiswa[index].nim);
    printf("Nama    : %s\n", mahasiswa[index].nama);
    printf("Jurusan : %s\n", mahasiswa[index].jurusan);
    printf("IPK     : %.2f\n", mahasiswa[index].ipk);
}

/* ==============================
   UBAH DATA
   ============================== */

void ubahData(
    struct Mahasiswa mahasiswa[],
    int jumlah
)
{
    char nim[20];

    printf("\n===== UBAH DATA =====\n");

    printf("Masukkan NIM: ");
    scanf(" %19[^\n]", nim);

    int index = cariIndexByNIM(
        mahasiswa,
        jumlah,
        nim
    );

    if (index == -1)
    {
        printf("\nMahasiswa tidak ditemukan.\n");
        return;
    }

    printf("\nData saat ini:\n");
    printf("Nama    : %s\n", mahasiswa[index].nama);
    printf("Jurusan : %s\n", mahasiswa[index].jurusan);
    printf("IPK     : %.2f\n", mahasiswa[index].ipk);

    printf("\nMasukkan data baru.\n");

    printf("Nama baru    : ");
    scanf(" %49[^\n]", mahasiswa[index].nama);

    printf("Jurusan baru : ");
    scanf(" %49[^\n]", mahasiswa[index].jurusan);

    printf("IPK baru     : ");
    scanf("%f", &mahasiswa[index].ipk);

    if (mahasiswa[index].ipk < 0 ||
        mahasiswa[index].ipk > 4)
    {
        printf("\nIPK tidak valid.\n");
        return;
    }

    printf("\nData berhasil diubah.\n");
}

/* ==============================
   HAPUS DATA
   ============================== */

void hapusData(
    struct Mahasiswa mahasiswa[],
    int *jumlah
)
{
    char nim[20];

    printf("\n===== HAPUS DATA =====\n");

    printf("Masukkan NIM: ");
    scanf(" %19[^\n]", nim);

    int index = cariIndexByNIM(
        mahasiswa,
        *jumlah,
        nim
    );

    if (index == -1)
    {
        printf("\nMahasiswa tidak ditemukan.\n");
        return;
    }

    for (int i = index; i < *jumlah - 1; i++)
    {
        mahasiswa[i] = mahasiswa[i + 1];
    }

    (*jumlah)--;

    printf("\nData berhasil dihapus.\n");
}

/* ==============================
   RATA-RATA IPK
   ============================== */

void hitungRataRataIPK(
    struct Mahasiswa mahasiswa[],
    int jumlah
)
{
    if (jumlah == 0)
    {
        printf("\nBelum ada data mahasiswa.\n");
        return;
    }

    float total = 0;

    for (int i = 0; i < jumlah; i++)
    {
        total += mahasiswa[i].ipk;
    }

    float rataRata = total / jumlah;

    printf("\n===== RATA-RATA IPK =====\n");
    printf("Jumlah mahasiswa : %d\n", jumlah);
    printf("Rata-rata IPK    : %.2f\n", rataRata);
}

/* ==============================
   IPK TERTINGGI
   ============================== */

void cariIPKTertinggi(
    struct Mahasiswa mahasiswa[],
    int jumlah
)
{
    if (jumlah == 0)
    {
        printf("\nBelum ada data mahasiswa.\n");
        return;
    }

    int indexTerbesar = 0;

    for (int i = 1; i < jumlah; i++)
    {
        if (
            mahasiswa[i].ipk >
            mahasiswa[indexTerbesar].ipk
        )
        {
            indexTerbesar = i;
        }
    }

    printf("\n===== IPK TERTINGGI =====\n");
    printf("NIM     : %s\n",
           mahasiswa[indexTerbesar].nim);

    printf("Nama    : %s\n",
           mahasiswa[indexTerbesar].nama);

    printf("Jurusan : %s\n",
           mahasiswa[indexTerbesar].jurusan);

    printf("IPK     : %.2f\n",
           mahasiswa[indexTerbesar].ipk);
}

/* ==============================
   STATUS KELULUSAN
   ============================== */

void tampilkanStatusKelulusan(
    struct Mahasiswa mahasiswa[],
    int jumlah
)
{
    if (jumlah == 0)
    {
        printf("\nBelum ada data mahasiswa.\n");
        return;
    }

    printf("\n===== STATUS KELULUSAN =====\n");

    for (int i = 0; i < jumlah; i++)
    {
        printf(
            "%-25s | IPK: %.2f | ",
            mahasiswa[i].nama,
            mahasiswa[i].ipk
        );

        if (mahasiswa[i].ipk >= 2.00)
        {
            printf("LULUS\n");
        }
        else
        {
            printf("TIDAK LULUS\n");
        }
    }
}

/* ==============================
   SIMPAN DATA
   ============================== */

void simpanData(
    struct Mahasiswa mahasiswa[],
    int jumlah
)
{
    FILE *file;

    file = fopen(FILE_DATA, "w");

    if (file == NULL)
    {
        printf("\nGagal membuka file.\n");
        return;
    }

    for (int i = 0; i < jumlah; i++)
    {
        fprintf(
            file,
            "%s|%s|%s|%.2f\n",
            mahasiswa[i].nim,
            mahasiswa[i].nama,
            mahasiswa[i].jurusan,
            mahasiswa[i].ipk
        );
    }

    fclose(file);

    printf("\nData berhasil disimpan ke %s\n",
           FILE_DATA);
}

/* ==============================
   LOAD DATA
   ============================== */

void loadData(
    struct Mahasiswa mahasiswa[],
    int *jumlah
)
{
    FILE *file;

    file = fopen(FILE_DATA, "r");

    if (file == NULL)
    {
        printf("\nFile data belum tersedia.\n");
        return;
    }

    *jumlah = 0;

    while (
        *jumlah < MAX_MAHASISWA &&
        fscanf(
            file,
            " %19[^|]|%49[^|]|%49[^|]|%f",
            mahasiswa[*jumlah].nim,
            mahasiswa[*jumlah].nama,
            mahasiswa[*jumlah].jurusan,
            &mahasiswa[*jumlah].ipk
        ) == 4
    )
    {
        (*jumlah)++;
    }

    fclose(file);

    printf(
        "\n%d data berhasil dimuat.\n",
        *jumlah
    );
}

/* ==============================
   MENU
   ============================== */

void tampilkanMenu()
{
    printf("\n");
    printf("========================================\n");
    printf("       SISTEM DATA MAHASISWA\n");
    printf("========================================\n");
    printf("1. Tambah Data\n");
    printf("2. Tampilkan Data\n");
    printf("3. Cari Mahasiswa\n");
    printf("4. Ubah Data\n");
    printf("5. Hapus Data\n");
    printf("6. Rata-rata IPK\n");
    printf("7. IPK Tertinggi\n");
    printf("8. Status Kelulusan\n");
    printf("9. Simpan Data\n");
    printf("10. Load Data\n");
    printf("0. Keluar\n");
    printf("========================================\n");
}

/* ==============================
   MAIN
   ============================== */

int main()
{
    struct Mahasiswa mahasiswa[MAX_MAHASISWA];

    int jumlah = 0;
    int pilihan;

    printf("========================================\n");
    printf("     SISTEM MANAJEMEN MAHASISWA\n");
    printf("========================================\n");

    printf("\nMemuat data...\n");

    loadData(
        mahasiswa,
        &jumlah
    );

    do
    {
        tampilkanMenu();

        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        switch (pilihan)
        {
            case 1:
                tambahData(
                    mahasiswa,
                    &jumlah
                );
                break;

            case 2:
                tampilkanData(
                    mahasiswa,
                    jumlah
                );
                break;

            case 3:
                cariMahasiswa(
                    mahasiswa,
                    jumlah
                );
                break;

            case 4:
                ubahData(
                    mahasiswa,
                    jumlah
                );
                break;

            case 5:
                hapusData(
                    mahasiswa,
                    &jumlah
                );
                break;

            case 6:
                hitungRataRataIPK(
                    mahasiswa,
                    jumlah
                );
                break;

            case 7:
                cariIPKTertinggi(
                    mahasiswa,
                    jumlah
                );
                break;

            case 8:
                tampilkanStatusKelulusan(
                    mahasiswa,
                    jumlah
                );
                break;

            case 9:
                simpanData(
                    mahasiswa,
                    jumlah
                );
                break;

            case 10:
                loadData(
                    mahasiswa,
                    &jumlah
                );
                break;

            case 0:
                printf("\nProgram selesai.\n");
                break;

            default:
                printf("\nPilihan tidak valid.\n");
        }

    } while (pilihan != 0);

    return 0;
}