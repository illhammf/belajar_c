# 📖 Pertemuan 04 - Percabangan (If, Else, Else If)

> **Seri** : Belajar Bahasa C dari Dasar hingga Mahir
>
> **Pertemuan** : 04
>
> **Level** : 🟢 Pemula
>
> **Estimasi Waktu** : ± 75 Menit
>
> **Versi Modul** : 1.0
>
> **Prerequisite**
>
> - Pertemuan 01 - Pengenalan Bahasa C
> - Pertemuan 02 - Variabel & Tipe Data
> - Pertemuan 03 - Operator
>
> **Source Code**
>
> - `if_sederhana.c`
> - `if_else.c`
> - `if_else_if.c`
> - `nested_if.c`
> - `operator_ternary.c`
> - `latihan_percabangan.c`
> - `studi_kasus_nilai_mahasiswa.c`

---

# 📚 Pendahuluan

Pada tiga pertemuan sebelumnya kita telah mempelajari cara membuat program, menyimpan data menggunakan variabel, serta mengolah data menggunakan operator.

Namun, program yang kita buat masih berjalan secara berurutan dari atas ke bawah tanpa dapat mengambil keputusan.

Contohnya:

```
Input

↓

Proses

↓

Output
```

Di dunia nyata, sebuah program hampir selalu harus menentukan tindakan berdasarkan suatu kondisi.

Misalnya:

- Apakah mahasiswa lulus?
- Apakah pelanggan mendapatkan diskon?
- Apakah pengguna berhasil login?
- Apakah umur sudah cukup membuat SIM?

Untuk menjawab pertanyaan-pertanyaan tersebut, Bahasa C menyediakan **Percabangan (Selection Statement).**

---

# 🎯 Tujuan Pembelajaran

Setelah menyelesaikan materi ini, kamu diharapkan mampu:

- Memahami konsep percabangan.
- Menggunakan `if`.
- Menggunakan `if...else`.
- Menggunakan `if...else if`.
- Membuat Nested If.
- Menggunakan Operator Ternary.
- Mengimplementasikan percabangan pada studi kasus sederhana.

---

# 📌 Apa itu Percabangan?

Percabangan adalah proses memilih satu aksi berdasarkan kondisi tertentu.

Ilustrasi sederhana:

```
          Nilai >= 75 ?
               │
        ┌──────┴──────┐
       Ya            Tidak
       │               │
    Lulus      Tidak Lulus
```

Program akan memeriksa kondisi terlebih dahulu.

Jika kondisi benar (**True**) maka blok tertentu dijalankan.

Jika salah (**False**) maka program menjalankan blok lainnya atau melewatinya.

---

# 📌 If Sederhana

Digunakan ketika hanya terdapat satu kondisi.

Sintaks

```c
if (kondisi)
{
    // dijalankan jika kondisi benar
}
```

Contoh

```c
if (umur >= 17)
{
    printf("Boleh membuat SIM");
}
```

Jika umur kurang dari 17 tahun maka program tidak akan menampilkan apa pun.

---

# 📌 If Else

Digunakan ketika terdapat dua kemungkinan.

Sintaks

```c
if (kondisi)
{
    // kondisi benar
}
else
{
    // kondisi salah
}
```

Contoh

```c
if (nilai >= 75)
{
    printf("Lulus");
}
else
{
    printf("Tidak Lulus");
}
```

Ilustrasi

```
Nilai >= 75

│

├── Ya → Lulus

└── Tidak → Tidak Lulus
```

---

# 📌 If Else If

Digunakan ketika memiliki banyak kondisi.

Contoh penentuan Grade.

```c
if (nilai >= 90)
{
    printf("Grade A");
}
else if (nilai >= 80)
{
    printf("Grade B");
}
else if (nilai >= 70)
{
    printf("Grade C");
}
else
{
    printf("Grade D");
}
```

Ilustrasi

```
Nilai >= 90

↓

Grade A

↓

80 - 89

↓

Grade B

↓

70 - 79

↓

Grade C

↓

< 70

↓

Grade D
```

---

# 📌 Nested If

Nested If adalah `if` yang berada di dalam `if` lainnya.

Contoh

```c
if (umur >= 17)
{
    if (punyaSIM)
    {
        printf("Boleh Mengemudi");
    }
}
```

Nested If biasanya digunakan ketika suatu kondisi bergantung pada kondisi sebelumnya.

---

# 📌 Operator Ternary

Operator Ternary merupakan bentuk singkat dari `if...else`.

Sintaks

```c
(kondisi) ? nilai_true : nilai_false;
```

Contoh

```c
status = (nilai >= 75) ? "Lulus" : "Tidak Lulus";
```

Hasilnya sama seperti menggunakan `if...else`, tetapi penulisannya lebih ringkas.

---

# 📌 Kapan Percabangan Digunakan?

Percabangan hampir selalu digunakan dalam pengembangan aplikasi.

Contohnya:

- Login pengguna
- Validasi password
- Penentuan diskon
- Menentukan grade mahasiswa
- Menentukan status kelulusan
- Menentukan hak akses Admin/User
- Menentukan stok barang tersedia atau habis

---

# 💻 Source Code

| File | Penjelasan |
|------|------------|
| if_sederhana.c | Penggunaan `if` |
| if_else.c | Penggunaan `if...else` |
| if_else_if.c | Penggunaan `if...else if` |
| nested_if.c | Nested If |
| operator_ternary.c | Operator Ternary |
| latihan_percabangan.c | Latihan sederhana |
| studi_kasus_nilai_mahasiswa.c | Mini Project |

---

# 🎯 Challenge

Buatlah program yang meminta input:

- Nama
- Nilai

Kemudian tampilkan:

```
=====================

HASIL PENILAIAN

=====================

Nama   : Ilham

Nilai  : 87

Grade  : B

Status : Lulus

=====================
```

Gunakan:

- if
- else if
- else

---

# 💡 Tahukah Kamu?

Banyak programmer pemula menulis seperti ini:

```c
if (nilai > 90)
```

Padahal jika nilai **90** juga ingin dianggap Grade A, maka operator yang benar adalah:

```c
if (nilai >= 90)
```

Kesalahan kecil seperti ini sering menyebabkan hasil program tidak sesuai dengan yang diharapkan.

---

# 📖 Referensi

- The C Programming Language — Brian W. Kernighan & Dennis M. Ritchie
- ISO/IEC 9899 (C Standard)
- GCC Documentation

---

# 🧭 Navigasi

⬅️ **Sebelumnya**

[Pertemuan 03 - Operator](../pertemuan-03/catatan.md)

🏠 **README Utama**

*(Akan dibuat setelah seluruh seri selesai.)*

➡️ **Selanjutnya**

[Pertemuan 05 - Switch Case](../pertemuan-05/catatan.md)

---

## ✅ Progress

- [x] Memahami Percabangan
- [x] Memahami `if`
- [x] Memahami `if...else`
- [x] Memahami `if...else if`
- [x] Memahami Nested If
- [x] Memahami Operator Ternary

🎉 **Selamat! Kamu telah menyelesaikan Pertemuan 04.**