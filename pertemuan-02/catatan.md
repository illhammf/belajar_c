# 📖 Pertemuan 02 - Variabel dan Tipe Data

> **Level** : 🟢 Pemula
>
> **Estimasi Waktu** : ± 45 Menit
>
> **Prerequisite** :
> - Pertemuan 01 - Pengenalan Bahasa C
>
> **Source Code**
>
> - `variabel.c`
> - `tipe_data.c`
> - `format_specifier.c`
> - `konstanta.c`
> - `latihan_variabel.c`

---

# 📚 Pendahuluan

Setelah pada pertemuan pertama kita berhasil membuat program pertama menggunakan Bahasa C, sekarang saatnya kita belajar bagaimana sebuah program dapat **menyimpan data**.

Bayangkan kita ingin membuat program biodata.

```
Nama   : Ilham
Umur   : 20 Tahun
Nilai  : A
```

Program harus memiliki tempat untuk menyimpan informasi tersebut.

Tempat penyimpanan inilah yang dinamakan **Variabel**.

Pada pertemuan ini kita juga akan mempelajari berbagai **Tipe Data**, yaitu jenis data yang dapat disimpan ke dalam variabel.

---

# 🎯 Tujuan Pembelajaran

Setelah menyelesaikan materi ini, kamu diharapkan mampu:

- Memahami konsep Variabel.
- Membuat Variabel.
- Mengenal berbagai Tipe Data.
- Menggunakan Format Specifier.
- Memahami Konstanta.
- Membuat program sederhana menggunakan Variabel.

---

# 📌 Apa itu Variabel?

Variabel adalah sebuah tempat di dalam memori komputer yang digunakan untuk menyimpan suatu nilai.

Misalnya kita memiliki sebuah kotak.

```
┌─────────────────────┐
│        umur         │
├─────────────────────┤
│         20          │
└─────────────────────┘
```

Kotak tersebut memiliki nama **umur**.

Di dalamnya terdapat nilai **20**.

Nilai tersebut dapat berubah kapan saja.

Contohnya:

```c
int umur = 20;

umur = 21;
```

Sekarang isi kotaknya menjadi

```
┌─────────────────────┐
│        umur         │
├─────────────────────┤
│         21          │
└─────────────────────┘
```

Karena nilainya bisa berubah, maka disebut **Variabel**.

---

# 📌 Deklarasi Variabel

Sintaks dasar

```c
tipe_data nama_variabel;
```

Contoh

```c
int umur;
```

Atau langsung diberi nilai

```c
int umur = 20;
```

Kita juga dapat membuat banyak variabel sekaligus.

```c
int umur = 20;
float tinggi = 170.5;
char nilai = 'A';
```

---

# 📌 Aturan Penamaan Variabel

Nama variabel harus mengikuti aturan Bahasa C.

## ✅ Boleh

```c
umur
nama
tinggi_badan
nilaiAkhir
```

## ❌ Tidak Boleh

```c
2umur
nama lengkap
nilai-harian
```

Tips:

Gunakan nama yang mudah dipahami.

Daripada

```c
int x;
```

Lebih baik

```c
int jumlahMahasiswa;
```

Karena kode akan jauh lebih mudah dibaca.

---

# 📌 Tipe Data

Setiap data memiliki jenisnya masing-masing.

| Tipe | Digunakan Untuk | Contoh |
|------|-----------------|---------|
| int | Bilangan Bulat | 20 |
| float | Bilangan Desimal | 170.5 |
| double | Desimal Presisi Tinggi | 3.141592653589 |
| char | Satu Karakter | 'A' |

Contoh

```c
int umur = 20;

float tinggi = 170.5;

double phi = 3.141592653589;

char nilai = 'A';
```

---

# 📌 Ukuran Memori

Secara umum:

| Tipe | Ukuran |
|------|---------|
| char | 1 Byte |
| int | 4 Byte |
| float | 4 Byte |
| double | 8 Byte |

Nantinya ukuran ini bisa kita cek menggunakan fungsi:

```c
sizeof()
```

yang akan dipelajari lebih lanjut.

---

# 📌 Format Specifier

Saat menggunakan `printf()` atau `scanf()`, kita harus memberi tahu compiler tipe data yang digunakan.

Caranya menggunakan **Format Specifier**.

| Format | Tipe Data |
|---------|-----------|
| `%d` | int |
| `%f` | float |
| `%lf` | double |
| `%c` | char |
| `%s` | string |

Contoh

```c
printf("%d", umur);

printf("%.1f", tinggi);

printf("%c", nilai);
```

---

# 📌 Konstanta

Kadang terdapat nilai yang tidak boleh berubah.

Misalnya

- PI
- Jumlah Hari
- Maksimal Data

Gunakan

```c
const
```

Contoh

```c
const float PI = 3.14;
```

atau

```c
#define MAX_DATA 100
```

Perbedaannya

| const | #define |
|---------|----------|
| Memiliki tipe data | Tidak memiliki tipe data |
| Lebih aman | Digunakan untuk Macro |

---

# 📌 Ringkasan

Hari ini kita mempelajari:

✅ Variabel

✅ Deklarasi Variabel

✅ Tipe Data

✅ Format Specifier

✅ Konstanta

Sekarang kamu sudah bisa membuat program yang dapat menyimpan data.

---

# 💻 Source Code

| File | Keterangan |
|------|-------------|
| variabel.c | Belajar membuat variabel |
| tipe_data.c | Mengenal tipe data |
| format_specifier.c | Belajar `%d`, `%f`, `%c`, `%lf` |
| konstanta.c | Belajar `const` dan `#define` |
| latihan_variabel.c | Menggabungkan seluruh materi |

---

# 🎯 Challenge

Buatlah program Biodata Mahasiswa.

Inputkan:

- Nama
- NIM
- Umur
- Tinggi Badan
- Nilai Huruf

Kemudian tampilkan hasilnya seperti berikut.

```
=========================

      BIODATA

=========================

Nama     : Ilham

NIM      : 20240001

Umur     : 20 Tahun

Tinggi   : 170.5 cm

Nilai    : A

=========================
```

---

# 📖 Referensi

- The C Programming Language — Brian W. Kernighan & Dennis M. Ritchie
- C17 Standard
- GCC Documentation

---

# 🧭 Navigasi

⬅️ **Sebelumnya**

[Pertemuan 01 - Pengenalan Bahasa C](../pertemuan-01/catatan.md)

🏠 **README Utama**

*(Akan dibuat setelah seluruh seri selesai.)*

➡️ **Selanjutnya**

[Pertemuan 03 - Operator](../pertemuan-03/catatan.md)

---

> 💡 **Catatan**
>
> Sebelum melanjutkan ke materi berikutnya, pastikan kamu memahami konsep variabel dan tipe data karena materi ini akan digunakan di hampir seluruh pembahasan selanjutnya, seperti operator, percabangan, perulangan, array, hingga struktur data.