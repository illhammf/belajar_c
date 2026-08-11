# 🏆 Pertemuan 13 - Final Project

> **Seri** : Belajar Bahasa C dari Dasar hingga Mahir  
> **Pertemuan** : 13  
> **Level** : 🔴 Final Project  
> **Project** : Sistem Manajemen Data Mahasiswa  
> **Bahasa** : C

---

# 📚 Pendahuluan

Setelah mempelajari berbagai konsep dasar sampai menengah dalam Bahasa C, sekarang waktunya menggabungkan seluruh materi menjadi sebuah project.

Project yang dibuat adalah:

# 🎓 Sistem Manajemen Data Mahasiswa

Program ini digunakan untuk mengelola data mahasiswa melalui terminal.

Program akan memiliki fitur:

- Menambahkan mahasiswa.
- Menampilkan mahasiswa.
- Mencari mahasiswa.
- Mengubah data mahasiswa.
- Menghapus mahasiswa.
- Menghitung rata-rata IPK.
- Menampilkan IPK tertinggi.
- Menampilkan mahasiswa berdasarkan status kelulusan.
- Menyimpan data ke file.
- Membaca data dari file.

---

# 🎯 Tujuan Project

Project ini bertujuan untuk menguji pemahaman terhadap:

- Variable
- Data Type
- Operator
- Conditional
- Switch Case
- Looping
- Array
- String
- Function
- Pointer
- Structure
- File Handling

---

# 🧠 Konsep Program

Data setiap mahasiswa terdiri dari:

```text
NIM
Nama
Jurusan
IPK
```

Structure:

```c
struct Mahasiswa
{
    char nim[20];
    char nama[50];
    char jurusan[50];
    float ipk;
};
```

Data tersebut disimpan dalam Array:

```c
struct Mahasiswa mahasiswa[MAX_MAHASISWA];
```

---

# 🗂️ Struktur Data

Program menggunakan:

```text
Array
   ↓
Structure
   ↓
Mahasiswa
```

Contoh:

```text
mahasiswa[0]
├── nim
├── nama
├── jurusan
└── ipk

mahasiswa[1]
├── nim
├── nama
├── jurusan
└── ipk
```

---

# 🎮 Menu Program

Menu utama:

```text
========================================
       SISTEM DATA MAHASISWA
========================================
1. Tambah Data
2. Tampilkan Data
3. Cari Mahasiswa
4. Ubah Data
5. Hapus Data
6. Rata-rata IPK
7. IPK Tertinggi
8. Status Kelulusan
9. Simpan Data
10. Load Data
0. Keluar
========================================
```

---

# 📌 Penjelasan Fitur

## 1. Tambah Data

User dapat menambahkan:

```text
NIM
Nama
Jurusan
IPK
```

Data dimasukkan ke Array Structure.

---

## 2. Tampilkan Data

Program menampilkan seluruh mahasiswa.

Contoh:

```text
===== DATA MAHASISWA =====

1.
NIM     : 23123456
Nama    : Ilham Firmansyah
Jurusan : Informatika
IPK     : 3.85

2.
NIM     : 23123457
Nama    : Budi
Jurusan : Sistem Informasi
IPK     : 3.70
```

---

## 3. Cari Mahasiswa

User memasukkan NIM.

Program mencari menggunakan Looping.

Jika ditemukan:

```text
Data ditemukan.
```

Jika tidak:

```text
Data tidak ditemukan.
```

---

## 4. Ubah Data

User memasukkan NIM.

Jika ditemukan, user dapat mengubah:

```text
Nama
Jurusan
IPK
```

---

## 5. Hapus Data

User memasukkan NIM.

Jika ditemukan, data akan dihapus.

Data setelahnya digeser menggunakan:

```text
Array shifting
```

Contoh:

```text
Sebelum:

[Ilham]
[Budi]
[Andi]

Hapus Budi:

[Ilham]
[Andi]
```

---

# 📊 6. Rata-rata IPK

Program menghitung:

```text
Total IPK
─────────
Jumlah Mahasiswa
```

Contoh:

```text
3.50 + 3.75 + 3.90
-------------------
        3

= 3.72
```

---

# 🏆 7. IPK Tertinggi

Program mencari mahasiswa dengan IPK paling tinggi.

Contoh:

```text
Ilham : 3.75
Budi  : 3.50
Andi  : 3.90
```

Output:

```text
IPK tertinggi:

Nama : Andi
IPK  : 3.90
```

---

# 🎓 8. Status Kelulusan

Program menggunakan Conditional.

Aturan:

```text
IPK >= 2.00
→ LULUS

IPK < 2.00
→ TIDAK LULUS
```

Contoh:

```text
Ilham
IPK    : 3.85
Status : LULUS
```

---

# 💾 9. Simpan Data

Data disimpan ke:

```text
data_mahasiswa.txt
```

Format:

```text
NIM|Nama|Jurusan|IPK
```

Contoh:

```text
23123456|Ilham Firmansyah|Informatika|3.85
23123457|Budi|Sistem Informasi|3.70
```

---

# 📂 10. Load Data

Program membaca:

```text
data_mahasiswa.txt
```

Kemudian memasukkannya kembali ke Array Structure.

Dengan demikian data tidak hilang ketika program ditutup.

---

# 🏗️ Arsitektur Program

Program dibagi menjadi beberapa Function.

```text
main()
 │
 ├── tampilkanMenu()
 │
 ├── tambahData()
 │
 ├── tampilkanData()
 │
 ├── cariMahasiswa()
 │
 ├── ubahData()
 │
 ├── hapusData()
 │
 ├── hitungRataRataIPK()
 │
 ├── cariIPKTertinggi()
 │
 ├── tampilkanStatusKelulusan()
 │
 ├── simpanData()
 │
 └── loadData()
```

---

# 🔥 Konsep yang Digunakan

## Variable

Contoh:

```c
int jumlah;
int pilihan;
```

---

## Conditional

Contoh:

```c
if (ipk >= 2.00)
{
    printf("LULUS");
}
else
{
    printf("TIDAK LULUS");
}
```

---

## Looping

Contoh:

```c
for (int i = 0; i < jumlah; i++)
{
    ...
}
```

---

## Array

```c
struct Mahasiswa mahasiswa[MAX_MAHASISWA];
```

---

## String

```c
char nama[50];
```

---

## Function

```c
void tambahData(...)
```

---

## Pointer

```c
int *jumlah
```

---

## Structure

```c
struct Mahasiswa
```

---

## File Handling

```c
FILE *file;
```

---

# 📌 Alur Program

```text
START
  │
  ↓
Load Data
  │
  ↓
Tampilkan Menu
  │
  ↓
Input Pilihan
  │
  ├── Tambah
  │
  ├── Tampilkan
  │
  ├── Cari
  │
  ├── Ubah
  │
  ├── Hapus
  │
  ├── Rata-rata
  │
  ├── IPK Tertinggi
  │
  ├── Status
  │
  ├── Simpan
  │
  └── Load
  │
  ↓
Kembali ke Menu
  │
  ↓
Keluar?
  │
  ├── Tidak → Menu
  │
  └── Ya
       ↓
     END
```

---

# 🧪 Contoh Penggunaan

Program dijalankan:

```text
========================================
       SISTEM DATA MAHASISWA
========================================
1. Tambah Data
2. Tampilkan Data
3. Cari Mahasiswa
4. Ubah Data
5. Hapus Data
6. Rata-rata IPK
7. IPK Tertinggi
8. Status Kelulusan
9. Simpan Data
10. Load Data
0. Keluar
========================================

Pilih menu:
```

User memilih:

```text
1
```

Kemudian:

```text
===== TAMBAH DATA =====

NIM     : 23123456
Nama    : Ilham Firmansyah
Jurusan : Informatika
IPK     : 3.85

Data berhasil ditambahkan.
```

---

# 🧠 Error Handling

Program harus menangani:

### Data penuh

```text
Data mahasiswa sudah penuh.
```

### Data tidak ditemukan

```text
Mahasiswa tidak ditemukan.
```

### File gagal dibuka

```text
Gagal membuka file.
```

### Pilihan menu tidak valid

```text
Pilihan tidak valid.
```

---

# 📁 File yang Digunakan

Source code:

```text
sistem_mahasiswa.c
```

Data:

```text
data_mahasiswa.txt
```

---

# 🏆 Final Checklist

- [ ] Tambah data
- [ ] Tampilkan data
- [ ] Cari data
- [ ] Ubah data
- [ ] Hapus data
- [ ] Hitung rata-rata IPK
- [ ] Cari IPK tertinggi
- [ ] Cek status kelulusan
- [ ] Simpan data
- [ ] Load data
- [ ] Error handling
- [ ] Program dapat berjalan tanpa error

---

# 🧭 Hubungan dengan Pertemuan Sebelumnya

```text
Pertemuan 01
Pengenalan C
      ↓
Pertemuan 02
Variabel
      ↓
Pertemuan 03
Operator
      ↓
Pertemuan 04
Percabangan
      ↓
Pertemuan 05
Switch Case
      ↓
Pertemuan 06
Looping
      ↓
Pertemuan 07
Array
      ↓
Pertemuan 08
String
      ↓
Pertemuan 09
Function
      ↓
Pertemuan 10
Pointer
      ↓
Pertemuan 11
Structure
      ↓
Pertemuan 12
File Handling
      ↓
Pertemuan 13
🏆 FINAL PROJECT
```

---

# 🎓 Kesimpulan

Final Project ini merupakan gabungan dari seluruh konsep yang telah dipelajari.

Program yang awalnya sederhana berkembang menjadi aplikasi yang mampu:

```text
Mengelola Data
      +
Mengolah Data
      +
Mencari Data
      +
Mengubah Data
      +
Menghapus Data
      +
Menyimpan Data
      +
Membaca Data
```

Dengan menyelesaikan project ini, kita sudah memiliki dasar yang cukup kuat untuk melanjutkan ke materi Bahasa C yang lebih lanjut.

---

# 🚀 Next Step

Setelah Final Project selesai, repository akan dirapikan.

Tahap terakhir:

```text
Source Code
    ↓
Catatan
    ↓
Struktur Folder
    ↓
README Utama
    ↓
GitHub Repository
```

README utama akan menjadi halaman utama pembelajaran yang menghubungkan seluruh pertemuan dari:

```text
Pertemuan 01
      ↓
Pertemuan 02
      ↓
...
      ↓
Pertemuan 12
      ↓
🏆 Final Project
```

---

# 🎉 FINISH

**Selamat!**

Kamu sudah menyelesaikan rangkaian pembelajaran Bahasa C dasar hingga Final Project.

> Jangan hanya membaca source code.
>
> **Ketik ulang, jalankan, error-kan, debug, lalu modifikasi sendiri.**

Karena kemampuan programming tidak dibangun dari menghafal syntax, tetapi dari memahami bagaimana program bekerja.