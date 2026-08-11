# 📖 Pertemuan 11 - Structure

> **Seri** : Belajar Bahasa C dari Dasar hingga Mahir  
> **Pertemuan** : 11  
> **Level** : 🟡 Menengah  
> **Estimasi Waktu** : ± 120 Menit  
> **Versi Modul** : 1.0

---

## 📚 Prerequisite

Sebelum mempelajari Structure, sebaiknya sudah memahami:

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

---

# 📚 Pendahuluan

Pada pertemuan sebelumnya kita sudah mempelajari:

- Variabel
- Array
- Function
- Pointer

Sekarang kita akan belajar mengelompokkan beberapa data yang berbeda tipe ke dalam satu kesatuan.

Konsep tersebut disebut **Structure** atau `struct`.

---

# 🎯 Tujuan Pembelajaran

Setelah menyelesaikan materi ini, diharapkan mampu:

- Memahami konsep Structure.
- Membuat Structure.
- Membuat variable dari Structure.
- Mengakses member Structure.
- Mengisi data Structure.
- Membuat Array of Structure.
- Menggunakan Structure pada Function.
- Menggunakan Pointer pada Structure.
- Menggunakan Nested Structure.
- Membuat program pengolahan data menggunakan Structure.

---

# 📌 Apa Itu Structure?

Structure adalah tipe data yang memungkinkan kita menggabungkan beberapa data dengan tipe berbeda ke dalam satu kesatuan.

Contohnya data mahasiswa:

```text
Mahasiswa
│
├── nama
├── umur
├── jurusan
└── ipk
```

Dalam C:

```c
struct Mahasiswa
{
    char nama[50];
    int umur;
    char jurusan[50];
    float ipk;
};
```

Sekarang kita memiliki tipe data baru bernama:

```text
Mahasiswa
```

---

# 📌 Membuat Structure

Sintaks dasar:

```c
struct NamaStruct
{
    tipe_data member1;
    tipe_data member2;
    tipe_data member3;
};
```

Contoh:

```c
struct Mahasiswa
{
    char nama[50];
    int umur;
    float ipk;
};
```

---

# 📌 Membuat Variable Structure

Setelah Structure dibuat, kita dapat membuat variable:

```c
struct Mahasiswa mahasiswa1;
```

Sekarang `mahasiswa1` memiliki:

```text
nama
umur
ipk
```

---

# 📌 Mengakses Member

Gunakan operator titik:

```c
.
```

Contoh:

```c
mahasiswa1.umur = 20;
mahasiswa1.ipk = 3.75;
```

Untuk String:

```c
strcpy(mahasiswa1.nama, "Ilham");
```

Jangan lupa:

```c
#include <string.h>
```

---

# 📌 Contoh Structure Sederhana

```c
#include <stdio.h>

struct Mahasiswa
{
    char nama[50];
    int umur;
    float ipk;
};

int main()
{
    struct Mahasiswa mahasiswa1 = {
        "Ilham",
        20,
        3.75
    };

    printf("Nama : %s\n", mahasiswa1.nama);
    printf("Umur : %d\n", mahasiswa1.umur);
    printf("IPK  : %.2f\n", mahasiswa1.ipk);

    return 0;
}
```

Output:

```text
Nama : Ilham
Umur : 20
IPK  : 3.75
```

---

# 📌 Structure vs Array

Array digunakan untuk menyimpan banyak data dengan tipe yang sama.

Contoh:

```c
int nilai[] = {80, 90, 75};
```

Semua datanya:

```text
int
```

Sedangkan Structure dapat menyimpan berbagai tipe data:

```c
struct Mahasiswa
{
    char nama[50];
    int umur;
    float ipk;
};
```

Jadi:

```text
Array
→ banyak data dengan tipe yang sama

Structure
→ beberapa data dengan tipe yang bisa berbeda
```

---

# 📌 Array of Structure

Kita dapat membuat Array yang berisi Structure.

Contoh:

```c
struct Mahasiswa mahasiswa[3];
```

Artinya kita memiliki:

```text
mahasiswa[0]
mahasiswa[1]
mahasiswa[2]
```

dan setiap elemen memiliki:

```text
nama
umur
ipk
```

Contoh:

```c
struct Mahasiswa mahasiswa[3] =
{
    {"Ilham", 20, 3.75},
    {"Budi", 21, 3.50},
    {"Andi", 19, 3.80}
};
```

---

# 📌 Mengakses Array of Structure

Contoh:

```c
printf("%s\n", mahasiswa[0].nama);
printf("%d\n", mahasiswa[1].umur);
printf("%.2f\n", mahasiswa[2].ipk);
```

---

# 📌 Looping Structure

Array of Structure dapat diproses menggunakan perulangan.

```c
for (int i = 0; i < 3; i++)
{
    printf("Nama : %s\n", mahasiswa[i].nama);
    printf("Umur : %d\n", mahasiswa[i].umur);
    printf("IPK  : %.2f\n", mahasiswa[i].ipk);
}
```

---

# 📌 Structure dan Function

Structure dapat dikirim ke Function.

Contoh:

```c
void tampilkanMahasiswa(struct Mahasiswa mahasiswa)
{
    printf("Nama : %s\n", mahasiswa.nama);
}
```

Kemudian:

```c
tampilkanMahasiswa(mahasiswa1);
```

---

# 📌 Pointer pada Structure

Structure juga dapat digunakan bersama Pointer.

Contoh:

```c
struct Mahasiswa mahasiswa1;

struct Mahasiswa *pointer = &mahasiswa1;
```

Untuk mengakses member melalui Pointer, gunakan:

```text
->
```

Contoh:

```c
pointer->umur = 20;
```

Ini sama dengan:

```c
(*pointer).umur = 20;
```

Namun bentuk:

```c
pointer->umur
```

lebih mudah dibaca.

---

# 📌 Operator `.` vs `->`

Gunakan `.` jika memiliki variable Structure biasa:

```c
mahasiswa.umur
```

Gunakan `->` jika memiliki Pointer ke Structure:

```c
pointer->umur
```

Ringkasnya:

```text
struct variable
      ↓
      .

struct pointer
      ↓
      ->
```

---

# 📌 Nested Structure

Structure dapat berada di dalam Structure lain.

Contoh:

```c
struct Alamat
{
    char kota[50];
    char provinsi[50];
};

struct Mahasiswa
{
    char nama[50];
    int umur;
    struct Alamat alamat;
};
```

Kemudian:

```c
mahasiswa.alamat.kota
```

---

# 📌 Typedef

Kita dapat menggunakan `typedef` agar penulisan Structure lebih sederhana.

Tanpa `typedef`:

```c
struct Mahasiswa mahasiswa1;
```

Dengan `typedef`:

```c
typedef struct
{
    char nama[50];
    int umur;
    float ipk;
} Mahasiswa;
```

Sekarang cukup:

```c
Mahasiswa mahasiswa1;
```

---

# 📌 Kapan Menggunakan Structure?

Structure cocok digunakan ketika kita memiliki sebuah objek atau entitas yang mempunyai beberapa atribut.

Contoh:

### Mahasiswa

```text
nama
nim
jurusan
ipk
```

### Produk

```text
nama
harga
stok
kategori
```

### Buku

```text
judul
penulis
tahun
harga
```

### User

```text
nama
email
umur
status
```

---

# 🧠 Konsep Penting

Structure dapat dianggap sebagai cara untuk membuat tipe data yang lebih sesuai dengan kebutuhan program.

Misalnya:

```c
struct Produk
{
    char nama[50];
    float harga;
    int stok;
};
```

Sekarang kita mempunyai satu kesatuan:

```text
Produk
├── nama
├── harga
└── stok
```

---

# 💻 Source Code

| File | Materi |
|---|---|
| `struct_dasar.c` | Structure dasar |
| `struct_input.c` | Input data Structure |
| `struct_akses_member.c` | Mengakses member |
| `struct_array.c` | Array of Structure |
| `struct_function.c` | Structure dan Function |
| `struct_pointer.c` | Pointer pada Structure |
| `struct_nested.c` | Nested Structure |
| `latihan_struct.c` | Latihan |
| `mini_project_data_mahasiswa.c` | Mini Project |

---

# 🎯 Challenge

## Challenge 1 - Data Produk

Buat Structure:

```c
struct Produk
{
    char nama[50];
    float harga;
    int stok;
};
```

Kemudian tampilkan:

```text
Nama  : Laptop
Harga : 7500000
Stok  : 10
```

---

## Challenge 2 - Array Structure

Buat 5 data mahasiswa.

Kemudian tampilkan semua datanya menggunakan `for`.

---

## Challenge 3 - Nilai Terbesar

Buat Array of Structure:

```c
struct Mahasiswa
{
    char nama[50];
    float ipk;
};
```

Cari mahasiswa dengan IPK terbesar.

---

# 🚀 Mini Project

Pada Mini Project kita akan membuat program:

```text
===== DATA MAHASISWA =====

1. Tambah Data
2. Tampilkan Data
3. Cari Mahasiswa
4. Cari IPK Tertinggi
5. Keluar
```

Data yang disimpan:

```text
NIM
Nama
Jurusan
IPK
```

Konsep yang digunakan:

```text
Structure
+
Array
+
Function
+
Pointer
+
Looping
+
Percabangan
```

---

# 🧠 Hubungan Materi

Mulai dari sini kita menggabungkan materi-materi sebelumnya:

```text
Array
   │
   ├──── menyimpan banyak data
   │
Function
   │
   ├──── memisahkan proses
   │
Pointer
   │
   ├──── mengakses alamat
   │
Structure
   │
   └──── mengelompokkan data
```

Gabungan semuanya akan membuat program menjadi jauh lebih powerful.

---

# ❌ Common Mistakes

## 1. Lupa `;` Setelah Structure

Salah:

```c
struct Mahasiswa
{
    char nama[50];
}
```

Benar:

```c
struct Mahasiswa
{
    char nama[50];
};
```

---

## 2. Salah Menggunakan `.` dan `->`

Variable biasa:

```c
mahasiswa.umur
```

Pointer:

```c
pointer->umur
```

---

## 3. Lupa `&` Saat Input

Untuk data biasa:

```c
scanf("%d", &mahasiswa.umur);
```

Bukan:

```c
scanf("%d", mahasiswa.umur);
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
🔥 11. Structure
⏳ 12. File Handling
🏆 13. Final Project
```

---

# 🧭 Navigasi

⬅️ [Pertemuan 10 - Pointer](../pertemuan-10/catatan.md)

🏠 [README Utama](../README.md)

➡️ [Pertemuan 12 - File Handling](../pertemuan-12/catatan.md)

---

# ✅ Progress

- [x] Memahami Structure
- [x] Membuat Structure
- [x] Membuat variable Structure
- [x] Mengakses member
- [x] Array of Structure
- [x] Structure dan Function
- [x] Pointer pada Structure
- [x] Operator `->`
- [x] Nested Structure
- [x] `typedef`

---

# 🎉 Kesimpulan

Structure digunakan untuk mengelompokkan beberapa data yang berhubungan ke dalam satu tipe data.

Contoh:

```c
struct Mahasiswa
{
    char nama[50];
    int umur;
    float ipk;
};
```

Kemudian:

```c
struct Mahasiswa mahasiswa1;
```

Akses data:

```c
mahasiswa1.nama
mahasiswa1.umur
mahasiswa1.ipk
```

Jika menggunakan Pointer:

```c
struct Mahasiswa *pointer = &mahasiswa1;
```

akses member menggunakan:

```c
pointer->nama
pointer->umur
pointer->ipk
```

Structure menjadi dasar penting sebelum mempelajari pengolahan data yang lebih kompleks.

**Selamat! Kamu telah menyelesaikan materi teori Pertemuan 11.** 🚀