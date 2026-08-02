# 📖 Pertemuan 01 - Pengenalan Bahasa C

> **Level** : 🟢 Pemula
>
> **Estimasi Waktu** : ± 30–45 Menit
>
> **Prerequisite** :
> - Tidak ada (Materi pertama)
>
> **Source Code**
>
> - `hello_world.c`
> - `biodata.c`
> - `input_output.c`

---

# 📚 Pendahuluan

Selamat datang di seri **Belajar Bahasa C dari Dasar hingga Mahir**.

Pada pertemuan pertama ini kita akan mengenal apa itu Bahasa C, bagaimana struktur dasar sebuah program C, serta bagaimana cara menampilkan dan menerima data dari pengguna.

Materi ini merupakan pondasi dari seluruh pembelajaran berikutnya. Oleh karena itu, pastikan setiap konsep dipahami sebelum melanjutkan ke materi selanjutnya.

---

# 🎯 Tujuan Pembelajaran

Setelah menyelesaikan pertemuan ini, kamu diharapkan mampu:

- Mengetahui sejarah singkat Bahasa C.
- Memahami struktur dasar program C.
- Menjalankan program pertama.
- Menggunakan fungsi `printf()`.
- Menggunakan fungsi `scanf()`.
- Membuat program sederhana.

---

# 📌 Apa itu Bahasa C?

Bahasa C adalah bahasa pemrograman **procedural** yang dikembangkan oleh **Dennis Ritchie** pada tahun **1972** di Bell Labs.

Bahasa ini menjadi salah satu bahasa pemrograman paling berpengaruh karena banyak bahasa modern yang mengadopsi konsep-konsepnya, seperti:

- C++
- Java
- C#
- PHP
- JavaScript (konsep dasar)
- Go
- Rust

Bahasa C masih banyak digunakan hingga saat ini, terutama untuk:

- Sistem Operasi
- Embedded System
- Driver Perangkat Keras
- Compiler
- Game Engine
- Internet of Things (IoT)

---

# 📌 Cara Kerja Program C

Sebelum program dijalankan, source code harus dikompilasi terlebih dahulu.

Alurnya sebagai berikut.

```
Source Code (.c)
        │
        ▼
Compiler (GCC)
        │
        ▼
File Executable (.exe)
        │
        ▼
Program Berjalan
```

Karena itulah Bahasa C disebut sebagai **compiled language**, berbeda dengan beberapa bahasa lain yang dapat dijalankan langsung melalui interpreter.

---

# 📌 Struktur Dasar Program C

Program paling sederhana adalah:

```c
#include <stdio.h>

int main()
{
    printf("Hello, World!\n");

    return 0;
}
```

Mari kita bahas satu per satu.

### `#include <stdio.h>`

Digunakan untuk memasukkan **Standard Input Output Library** sehingga kita dapat menggunakan fungsi seperti:

- `printf()`
- `scanf()`

---

### `int main()`

Merupakan fungsi utama.

Program akan mulai dijalankan dari fungsi `main()`.

---

### `{ }`

Kurung kurawal digunakan untuk menandai awal dan akhir sebuah blok program.

---

### `printf()`

Digunakan untuk menampilkan teks ke layar.

Contoh:

```c
printf("Halo Dunia");
```

Output:

```
Halo Dunia
```

---

### `return 0;`

Menandakan bahwa program selesai dijalankan tanpa kesalahan.

---

# 📌 Komentar

Komentar digunakan untuk memberikan penjelasan pada kode.

Komentar tidak akan dijalankan oleh compiler.

Komentar satu baris:

```c
// Ini komentar
```

Komentar lebih dari satu baris:

```c
/*
Ini komentar
lebih dari satu baris
*/
```

---

# 📌 Output Menggunakan `printf()`

Contoh:

```c
printf("Nama : Ilham\n");
printf("Umur : 20 Tahun\n");
```

Output:

```
Nama : Ilham
Umur : 20 Tahun
```

Karakter `\n` digunakan untuk berpindah ke baris baru.

---

# 📌 Input Menggunakan `scanf()`

Program juga dapat menerima data dari pengguna.

Contoh:

```c
int umur;

printf("Masukkan umur : ");
scanf("%d", &umur);

printf("Umur Anda : %d", umur);
```

Contoh output:

```
Masukkan umur : 20

Umur Anda : 20
```

Perhatikan penggunaan tanda `&` pada variabel saat menggunakan `scanf()` untuk tipe data seperti `int` dan `float`. Tanda ini digunakan untuk memberikan alamat memori variabel kepada fungsi `scanf()`.

---

# 📌 Program Pertama

Program "Hello, World!" merupakan program yang hampir selalu dibuat ketika mempelajari bahasa pemrograman baru.

```c
#include <stdio.h>

int main()
{
    printf("Hello, World!\n");

    return 0;
}
```

Output:

```
Hello, World!
```

---

# 📌 Ringkasan

Pada pertemuan ini kita telah mempelajari:

- Apa itu Bahasa C
- Cara kerja program C
- Struktur dasar program
- Fungsi `main()`
- Library `stdio.h`
- Fungsi `printf()`
- Fungsi `scanf()`
- Komentar

---

# 💻 Source Code

| File | Keterangan |
|------|------------|
| `hello_world.c` | Program pertama "Hello, World!" |
| `biodata.c` | Menampilkan biodata sederhana menggunakan `printf()` |
| `input_output.c` | Belajar menerima input menggunakan `scanf()` |

---

# 🎯 Challenge

Buatlah program yang menampilkan biodata sederhana menggunakan `printf()`.

Data yang ditampilkan:

- Nama
- Umur
- Kampus
- Program Studi

Contoh hasil:

```
========================

      BIODATA

========================

Nama      : Ilham

Umur      : 20 Tahun

Kampus    : Universitas Esa Unggul

Program   : Teknik Informatika

========================
```

---

# 📖 Referensi

- The C Programming Language — Brian W. Kernighan & Dennis M. Ritchie
- GCC Documentation
- ISO/IEC 9899 (C Standard)

---

# 🧭 Navigasi

🏠 **README Utama**

*(Akan dibuat setelah seluruh seri selesai.)*

➡️ **Selanjutnya**

[Pertemuan 02 - Variabel dan Tipe Data](../pertemuan-02/catatan.md)

---

> 💡 **Catatan**
>
> Pertemuan pertama merupakan pondasi dari seluruh materi Bahasa C. Pastikan kamu memahami struktur dasar program, fungsi `main()`, serta penggunaan `printf()` dan `scanf()`, karena konsep-konsep tersebut akan terus digunakan pada setiap pertemuan berikutnya.