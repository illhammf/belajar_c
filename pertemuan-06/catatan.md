# 📖 Pertemuan 06 - Perulangan (Looping)

> **Seri** : Belajar Bahasa C dari Dasar hingga Mahir
>
> **Pertemuan** : 06
>
> **Level** : 🟢 Pemula
>
> **Estimasi Waktu** : ± 90 Menit
>
> **Versi Modul** : 1.0
>
> **Prerequisite**
>
> - Pertemuan 01 - Pengenalan Bahasa C
> - Pertemuan 02 - Variabel & Tipe Data
> - Pertemuan 03 - Operator
> - Pertemuan 04 - Percabangan
> - Pertemuan 05 - Switch Case
>
> **Source Code**
>
> - `for_loop.c`
> - `while_loop.c`
> - `do_while_loop.c`
> - `nested_loop.c`
> - `infinite_loop.c`
> - `latihan_looping.c`
> - `mini_project_menu_berulang.c`

---

# 📚 Pendahuluan

Bayangkan jika kita ingin menampilkan angka 1 sampai 100.

Tanpa perulangan, kita harus menulis:

```c
printf("1\n");
printf("2\n");
printf("3\n");
...
printf("100\n");
```

Tentu cara tersebut tidak efisien.

Dengan **Looping**, pekerjaan tersebut cukup ditulis beberapa baris saja.

Perulangan memungkinkan program menjalankan blok kode secara berulang selama kondisi tertentu masih terpenuhi.

---

# 🎯 Tujuan Pembelajaran

Setelah mempelajari materi ini, kamu diharapkan mampu:

- Memahami konsep looping.
- Menggunakan `for`.
- Menggunakan `while`.
- Menggunakan `do...while`.
- Memahami Nested Loop.
- Menghindari Infinite Loop.
- Membuat program menggunakan perulangan.

---

# 📌 Apa itu Looping?

Looping adalah proses mengulang eksekusi suatu blok kode selama kondisi tertentu bernilai benar.

Ilustrasi:

```
Mulai

↓

Cek Kondisi

↓

True

↓

Jalankan Perintah

↓

Kembali Cek Kondisi

↓

False

↓

Selesai
```

---

# 📌 For Loop

Digunakan ketika jumlah perulangan sudah diketahui.

Sintaks

```c
for (inisialisasi; kondisi; increment)
{
    // kode
}
```

Contoh

```c
for (int i = 1; i <= 5; i++)
{
    printf("%d\n", i);
}
```

---

# 📌 While Loop

Digunakan ketika jumlah perulangan belum diketahui.

Sintaks

```c
while (kondisi)
{
    // kode
}
```

---

# 📌 Do While

Berbeda dengan `while`, blok kode pada `do...while` akan dijalankan **minimal satu kali**.

Sintaks

```c
do
{
    // kode
}
while (kondisi);
```

---

# 📌 Nested Loop

Nested Loop adalah perulangan yang berada di dalam perulangan lainnya.

Biasanya digunakan untuk:

- Membuat pola bintang
- Tabel
- Matriks

---

# 📌 Infinite Loop

Infinite Loop adalah perulangan yang tidak pernah berhenti karena kondisi selalu bernilai benar.

Contoh:

```c
while (1)
{
    printf("Hello");
}
```

Gunakan dengan hati-hati.

---

# 📌 Kapan Looping Digunakan?

Looping digunakan hampir di semua aplikasi, misalnya:

- Menghitung total data
- Membaca file
- Menampilkan daftar menu
- Memproses banyak input
- Game Loop
- Server

---

# 💻 Source Code

| File | Penjelasan |
|------|------------|
| for_loop.c | Perulangan `for` |
| while_loop.c | Perulangan `while` |
| do_while_loop.c | Perulangan `do...while` |
| nested_loop.c | Nested Loop |
| infinite_loop.c | Infinite Loop |
| latihan_looping.c | Latihan |
| mini_project_menu_berulang.c | Mini Project |

---

# 🎯 Challenge

Buat program yang:

- Menampilkan angka 1–50.
- Menampilkan bilangan genap 2–20.
- Menghitung jumlah bilangan 1–100.

Gunakan `for`.

---

# 💡 Tahukah Kamu?

Perulangan yang tidak memiliki kondisi berhenti disebut **Infinite Loop**.

Infinite Loop sering digunakan pada:

- Game Engine
- Web Server
- Sistem Operasi

Namun, pada program biasa, Infinite Loop tanpa mekanisme keluar akan membuat program tidak pernah selesai.

---

# 📖 Referensi

- The C Programming Language — Brian W. Kernighan & Dennis M. Ritchie
- ISO/IEC 9899 (C Standard)
- GCC Documentation

---

# 🧭 Navigasi

⬅️ **Sebelumnya**

[Pertemuan 05 - Switch Case](../pertemuan-05/catatan.md)

🏠 **README Utama**

*(Akan dibuat setelah seluruh seri selesai.)*

➡️ **Selanjutnya**

[Pertemuan 07 - Array](../pertemuan-07/catatan.md)

---

## ✅ Progress

- [x] Memahami Looping
- [x] Memahami `for`
- [x] Memahami `while`
- [x] Memahami `do...while`
- [x] Memahami Nested Loop
- [x] Memahami Infinite Loop

🎉 **Selamat! Kamu telah menyelesaikan Pertemuan 06.**