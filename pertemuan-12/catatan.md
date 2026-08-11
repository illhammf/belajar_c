# 📖 Pertemuan 12 - File Handling

> **Seri** : Belajar Bahasa C dari Dasar hingga Mahir  
> **Pertemuan** : 12  
> **Level** : 🟡 Menengah  
> **Estimasi Waktu** : ± 120 Menit  
> **Versi Modul** : 1.0

---

## 📚 Prerequisite

Sebelum mempelajari File Handling, sebaiknya sudah memahami:

- [Pertemuan 01 - Pengenalan Bahasa C](../pertemuan-01/catatan.md)
- [Pertemuan 02 - Variabel & Tipe Data](../pertemuan-02/catatan.md)
- [Pertemuan 03 - Operator](../pertemuan-03/catatan.md)
- [Pertemuan 04 - Percabangan](../pertemuan-04/catatan.md)
- [Pertemuan 05 - Switch Case](../pertemuan-05/catatan.md)
- [Pertemuan 06 - Perulangan](../pertemuan-06/catatan.md)
- [Pertemuan 07 - Array](../pertemuan-07/catatan.md)
- [Pertemuan 08 - String](../pertemuan-08/catatan.md)
- [Pertemuan 09 - Function](../pertemuan-09/catatan.md)
- [Pertemuan 10 - Pointer](../pertemuan-10/catatan.md)
- [Pertemuan 11 - Structure](../pertemuan-11/catatan.md)

---

# 📚 Pendahuluan

Pada beberapa pertemuan sebelumnya kita sudah membuat program yang dapat mengolah data.

Contohnya:

```text
Data Mahasiswa
├── NIM
├── Nama
├── Jurusan
└── IPK
```

Namun terdapat satu masalah.

Data tersebut hanya tersimpan selama program berjalan.

Jika program ditutup:

```text
Program ditutup
      ↓
Data hilang
```

File Handling digunakan untuk menyimpan data secara permanen ke file.

---

# 🎯 Tujuan Pembelajaran

Setelah menyelesaikan materi ini, diharapkan mampu:

- Memahami konsep File Handling.
- Membuka file.
- Menutup file.
- Menulis data ke file.
- Membaca data dari file.
- Menambahkan data ke file.
- Menggunakan `fprintf()`.
- Menggunakan `fscanf()`.
- Memahami mode file.
- Memahami `FILE *`.
- Memahami perbedaan text file dan binary file.
- Membuat program sederhana dengan penyimpanan file.

---

# 📌 Apa Itu File Handling?

File Handling adalah proses untuk:

- Membuat file.
- Membuka file.
- Membaca file.
- Menulis file.
- Mengubah file.
- Menutup file.

Dalam Bahasa C, File Handling menggunakan:

```c
FILE
```

Contoh:

```c
FILE *file;
```

---

# 📌 Membuka File

Gunakan:

```c
fopen()
```

Contoh:

```c
FILE *file;

file = fopen("data.txt", "w");
```

Artinya:

```text
Buka file data.txt
dengan mode write
```

---

# 📌 Menutup File

Setelah selesai menggunakan file, gunakan:

```c
fclose(file);
```

Contoh:

```c
FILE *file;

file = fopen("data.txt", "w");

fclose(file);
```

Biasakan selalu menutup file setelah selesai digunakan.

---

# 📌 Memeriksa Apakah File Berhasil Dibuka

`fopen()` dapat gagal.

Karena itu kita harus melakukan pengecekan:

```c
FILE *file;

file = fopen("data.txt", "w");

if (file == NULL)
{
    printf("File gagal dibuka.\n");
    return 1;
}
```

Jika berhasil:

```c
printf("File berhasil dibuka.\n");
```

---

# 📌 Mode File

Beberapa mode penting:

| Mode | Fungsi |
|---|---|
| `r` | Membaca file |
| `w` | Menulis file |
| `a` | Menambahkan data |
| `r+` | Membaca dan menulis |
| `w+` | Membaca dan menulis, file dibuat ulang |
| `a+` | Membaca dan menambahkan data |

---

# 📌 Mode `w`

Mode:

```c
"w"
```

digunakan untuk menulis.

Contoh:

```c
FILE *file = fopen("data.txt", "w");
```

Jika file belum ada:

```text
data.txt
```

akan dibuat.

Jika file sudah ada, isinya akan ditimpa.

Contoh:

```text
Data lama
```

kemudian program menggunakan mode `w`.

Maka:

```text
Data lama
```

akan diganti dengan data baru.

---

# 📌 Mode `a`

Mode:

```c
"a"
```

digunakan untuk menambahkan data di akhir file.

Contoh:

```c
FILE *file = fopen("data.txt", "a");
```

Jika sebelumnya:

```text
Ilham
Budi
```

kemudian kita menambahkan:

```text
Andi
```

hasil:

```text
Ilham
Budi
Andi
```

Data sebelumnya tidak dihapus.

---

# 📌 Mode `r`

Mode:

```c
"r"
```

digunakan untuk membaca file.

Contoh:

```c
FILE *file = fopen("data.txt", "r");
```

File harus sudah tersedia.

Jika file tidak ditemukan:

```c
file == NULL
```

---

# 📌 Menulis dengan `fprintf()`

Salah satu cara menulis data ke file:

```c
fprintf()
```

Contoh:

```c
FILE *file = fopen("data.txt", "w");

fprintf(file, "Halo Dunia!");

fclose(file);
```

Isi `data.txt`:

```text
Halo Dunia!
```

---

# 📌 Membaca dengan `fscanf()`

Untuk membaca data dari file dapat menggunakan:

```c
fscanf()
```

Contoh:

```c
FILE *file = fopen("data.txt", "r");

char nama[50];

fscanf(file, "%s", nama);

printf("%s", nama);

fclose(file);
```

---

# 📌 Membaca Baris dengan `fgets()`

Untuk membaca satu baris dari file:

```c
fgets()
```

Contoh:

```c
char buffer[100];

fgets(buffer, sizeof(buffer), file);
```

`fgets()` sering lebih nyaman digunakan untuk membaca file teks baris demi baris.

---

# 📌 Menulis dengan `fputs()`

Untuk menulis string:

```c
fputs()
```

Contoh:

```c
fputs("Halo Dunia\n", file);
```

---

# 📌 Membaca Karakter dengan `fgetc()`

Untuk membaca satu karakter:

```c
fgetc()
```

Contoh:

```c
char karakter;

karakter = fgetc(file);
```

---

# 📌 Menulis Karakter dengan `fputc()`

Untuk menulis satu karakter:

```c
fputc()
```

Contoh:

```c
fputc('A', file);
```

---

# 📌 Membaca Sampai Akhir File

Salah satu pola umum:

```c
while (fgets(buffer, sizeof(buffer), file) != NULL)
{
    printf("%s", buffer);
}
```

Artinya:

```text
Selama masih ada baris
        ↓
Baca baris
        ↓
Tampilkan
        ↓
Ulangi
```

---

# 📌 `EOF`

EOF adalah singkatan dari:

```text
End Of File
```

EOF digunakan untuk menandakan akhir data ketika menggunakan fungsi tertentu seperti `fgetc()`.

Contoh:

```c
int karakter;

while ((karakter = fgetc(file)) != EOF)
{
    putchar(karakter);
}
```

Perhatikan bahwa variabel digunakan sebagai `int`, bukan `char`, agar dapat membedakan karakter dengan nilai `EOF`.

---

# 📌 Text File

Text file menyimpan data dalam bentuk teks yang dapat dibaca manusia.

Contoh:

```text
data.txt
```

Isi:

```text
Ilham
20
3.75
```

Cocok untuk:

- Konfigurasi.
- Log.
- Data sederhana.
- Export data.
- File yang perlu dibaca manusia.

---

# 📌 Binary File

Binary file menyimpan data dalam bentuk representasi biner.

Biasanya menggunakan mode:

```c
"rb"
"wb"
"ab"
```

Contoh:

```c
FILE *file = fopen("data.dat", "wb");
```

Binary file sering digunakan untuk menyimpan data Structure secara langsung.

Namun binary file tidak dirancang untuk dibaca manusia seperti text file.

---

# 📌 `fwrite()`

Untuk menulis data binary:

```c
fwrite()
```

Contoh:

```c
fwrite(&data, sizeof(data), 1, file);
```

Parameter:

```text
&data
→ alamat data

sizeof(data)
→ ukuran data

1
→ jumlah data

file
→ file tujuan
```

---

# 📌 `fread()`

Untuk membaca data binary:

```c
fread()
```

Contoh:

```c
fread(&data, sizeof(data), 1, file);
```

---

# 📌 Alur File Handling

Secara umum:

```text
Program
   │
   ↓
fopen()
   │
   ↓
File berhasil dibuka?
   │
   ├── Tidak → Handle Error
   │
   └── Ya
        │
        ↓
   Baca / Tulis
        │
        ↓
     fclose()
        │
        ↓
      Selesai
```

---

# 📌 `FILE *`

Deklarasi:

```c
FILE *file;
```

`file` merupakan Pointer yang digunakan untuk merepresentasikan file yang sedang dibuka.

Contoh:

```c
FILE *file = fopen("data.txt", "r");
```

---

# 🧠 Hubungan dengan Pointer

Materi File Handling juga menggunakan konsep Pointer.

Contohnya:

```c
FILE *file;
```

Tanda:

```c
*
```

menunjukkan bahwa `file` merupakan Pointer ke objek `FILE`.

Jadi materi:

```text
Pointer
   ↓
FILE *
   ↓
File Handling
```

saling berhubungan.

---

# 📌 Error Handling

Selalu cek hasil `fopen()`.

Contoh:

```c
FILE *file = fopen("data.txt", "r");

if (file == NULL)
{
    printf("File tidak dapat dibuka.\n");
    return 1;
}
```

Ini penting agar program tidak melanjutkan proses menggunakan file yang gagal dibuka.

---

# 💻 Source Code

| File | Materi |
|---|---|
| `file_buka_tutup.c` | Membuka dan menutup file |
| `file_tulis.c` | Menulis file |
| `file_baca.c` | Membaca file |
| `file_append.c` | Menambahkan data |
| `file_fprintf.c` | Menulis dengan `fprintf()` |
| `file_fscanf.c` | Membaca dengan `fscanf()` |
| `file_binary.c` | Binary file |
| `latihan_file.c` | Latihan |
| `mini_project_data_mahasiswa.c` | Mini Project |

---

# 🎯 Challenge

## Challenge 1 - Menulis File

Buat program yang menghasilkan:

```text
data.txt
```

dengan isi:

```text
Belajar Bahasa C
Pertemuan 12
File Handling
```

---

## Challenge 2 - Membaca File

Buat program yang membaca:

```text
data.txt
```

kemudian menampilkan seluruh isinya ke terminal.

---

## Challenge 3 - Append

Tambahkan data:

```text
Pointer
Structure
Function
```

tanpa menghapus isi sebelumnya.

---

# 🚀 Mini Project

Kita akan mengembangkan Mini Project Pertemuan 11.

Sebelumnya:

```text
Program
   ↓
Data Mahasiswa
   ↓
Program ditutup
   ↓
Data hilang
```

Sekarang:

```text
Program
   ↓
Data Mahasiswa
   ↓
Simpan ke file
   ↓
Program ditutup
   ↓
Program dijalankan lagi
   ↓
Data dibaca dari file
```

Fitur:

```text
===== DATA MAHASISWA =====

1. Tambah Data
2. Tampilkan Data
3. Cari Mahasiswa
4. Cari IPK Tertinggi
5. Simpan Data
6. Load Data
7. Keluar
```

Konsep:

```text
Structure
+
Array
+
Function
+
Pointer
+
File Handling
```

---

# 🧠 Best Practice

## 1. Selalu cek `fopen()`

```c
if (file == NULL)
{
    printf("Gagal membuka file.\n");
    return 1;
}
```

---

## 2. Selalu `fclose()`

Setelah selesai:

```c
fclose(file);
```

---

## 3. Gunakan mode file sesuai kebutuhan

Jika ingin mengganti isi:

```c
"w"
```

Jika ingin menambahkan:

```c
"a"
```

Jika ingin membaca:

```c
"r"
```

---

# ❌ Common Mistakes

## 1. Membuka file `r` yang tidak ada

```c
FILE *file = fopen("data.txt", "r");
```

Jika `data.txt` tidak ada, `file` akan bernilai `NULL`.

---

## 2. Lupa `fclose()`

Kurang baik:

```c
FILE *file = fopen("data.txt", "w");

fprintf(file, "Hello");
```

Lebih baik:

```c
FILE *file = fopen("data.txt", "w");

if (file == NULL)
{
    return 1;
}

fprintf(file, "Hello");

fclose(file);
```

---

## 3. Menggunakan `w` tanpa memahami efeknya

```c
fopen("data.txt", "w");
```

dapat menghapus isi file sebelumnya ketika file dibuka untuk ditulis.

Jika ingin menambahkan data, gunakan:

```c
"a"
```

---

# 🗺️ Roadmap Pembelajaran

```text
✅ 01. Pengenalan Bahasa C
✅ 02. Variabel & Tipe Data
✅ 03. Operator
✅ 04. Percabangan
✅ 05. Switch Case
✅ 06. Perulangan
✅ 07. Array
✅ 08. String
✅ 09. Function
✅ 10. Pointer
✅ 11. Structure
🔥 12. File Handling
🏆 13. Final Project
```

---

# 🧭 Navigasi

⬅️ [Pertemuan 11 - Structure](../pertemuan-11/catatan.md)

🏠 [README Utama](../README.md)

➡️ [Pertemuan 13 - Final Project](../pertemuan-13/catatan.md)

---

# ✅ Progress

- [x] Memahami File Handling
- [x] `FILE *`
- [x] `fopen()`
- [x] `fclose()`
- [x] Mode `r`
- [x] Mode `w`
- [x] Mode `a`
- [x] `fprintf()`
- [x] `fscanf()`
- [x] `fgets()`
- [x] `fputs()`
- [x] `fgetc()`
- [x] `fputc()`
- [x] `fread()`
- [x] `fwrite()`
- [x] Text file
- [x] Binary file
- [x] Error handling

---

# 🎉 Kesimpulan

File Handling membuat program dapat menyimpan data secara permanen.

Konsep paling dasar:

```c
FILE *file;

file = fopen("data.txt", "w");

if (file == NULL)
{
    return 1;
}

fprintf(file, "Hello World");

fclose(file);
```

Alurnya:

```text
fopen()
   ↓
File terbuka
   ↓
Baca / Tulis
   ↓
fclose()
```

Setelah memahami File Handling, program yang sebelumnya hanya bekerja dengan data sementara sekarang dapat memiliki **persistent data**.

Ini merupakan langkah besar menuju pembuatan aplikasi yang lebih realistis.

**Selamat! Kamu telah menyelesaikan materi teori Pertemuan 12.** 🚀