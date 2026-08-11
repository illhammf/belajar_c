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

void tambahData(struct Mahasiswa mahasiswa[], int *jumlah)
{
    if (*jumlah >= MAX_MAHASISWA)
    {
        printf("\nData sudah penuh.\n");
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

    (*jumlah)++;

    printf("\nData berhasil ditambahkan.\n");
}

void tampilkanData(
    struct Mahasiswa mahasiswa[],
    int jumlah
)
{
    if (jumlah == 0)
    {
        printf("\nBelum ada data.\n");
        return;
    }

    printf("\n===== DATA MAHASISWA =====\n");

    for (int i = 0; i < jumlah; i++)
    {
        printf("\nMahasiswa ke-%d\n", i + 1);
        printf("NIM     : %s\n", mahasiswa[i].nim);
        printf("Nama    : %s\n", mahasiswa[i].nama);
        printf("Jurusan : %s\n", mahasiswa[i].jurusan);
        printf("IPK     : %.2f\n", mahasiswa[i].ipk);
    }
}

void cariMahasiswa(
    struct Mahasiswa mahasiswa[],
    int jumlah
)
{
    char keyword[50];
    int ditemukan = 0;

    printf("\nMasukkan nama: ");
    scanf(" %49[^\n]", keyword);

    for (int i = 0; i < jumlah; i++)
    {
        if (strcmp(mahasiswa[i].nama, keyword) == 0)
        {
            printf("\nData ditemukan!\n");

            printf("NIM     : %s\n", mahasiswa[i].nim);
            printf("Nama    : %s\n", mahasiswa[i].nama);
            printf("Jurusan : %s\n", mahasiswa[i].jurusan);
            printf("IPK     : %.2f\n", mahasiswa[i].ipk);

            ditemukan = 1;
            break;
        }
    }

    if (!ditemukan)
    {
        printf("\nData tidak ditemukan.\n");
    }
}

void cariIPKTertinggi(
    struct Mahasiswa mahasiswa[],
    int jumlah
)
{
    if (jumlah == 0)
    {
        printf("\nBelum ada data.\n");
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

    printf("\nData berhasil disimpan.\n");
}

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

void tampilkanMenu()
{
    printf("\n============================\n");
    printf("      DATA MAHASISWA\n");
    printf("============================\n");
    printf("1. Tambah Data\n");
    printf("2. Tampilkan Data\n");
    printf("3. Cari Mahasiswa\n");
    printf("4. Cari IPK Tertinggi\n");
    printf("5. Simpan Data\n");
    printf("6. Load Data\n");
    printf("7. Keluar\n");
    printf("============================\n");
}

int main()
{
    struct Mahasiswa mahasiswa[MAX_MAHASISWA];

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
                    printf("\nBelum ada data.\n");
                }
                else
                {
                    cariMahasiswa(
                        mahasiswa,
                        jumlah
                    );
                }
                break;

            case 4:
                cariIPKTertinggi(
                    mahasiswa,
                    jumlah
                );
                break;

            case 5:
                simpanData(
                    mahasiswa,
                    jumlah
                );
                break;

            case 6:
                loadData(
                    mahasiswa,
                    &jumlah
                );
                break;

            case 7:
                printf("\nProgram selesai.\n");
                break;

            default:
                printf("\nPilihan tidak valid.\n");
        }

    } while (pilihan != 7);

    return 0;
}