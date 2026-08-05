# 📖 Pertemuan 07 - Array dalam Bahasa C

> **Seri** : Belajar Bahasa C dari Dasar hingga Mahir
>
> **Pertemuan** : 07
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
> - Pertemuan 06 - Perulangan
>
> **Source Code**
>
> - `array_dasar.c`
> - `input_output_array.c`
> - `mencari_nilai_terbesar.c`
> - `mencari_nilai_terkecil.c`
> - `menghitung_rata_rata.c`
> - `array_dua_dimensi.c`
> - `latihan_array.c`
> - `mini_project_nilai_mahasiswa.c`

---

# 📚 Pendahuluan

Bayangkan kamu ingin menyimpan nilai 5 mahasiswa.

Tanpa array, kamu harus membuat:

```c
int nilai1;
int nilai2;
int nilai3;
int nilai4;
int nilai5;
```

Semakin banyak data, semakin banyak variabel yang harus dibuat.

Array hadir untuk mengatasi masalah tersebut.

Dengan array, cukup satu variabel:

```c
int nilai[5];
```

Lalu setiap data dapat diakses menggunakan indeks.

---

# 🎯 Tujuan Pembelajaran

Setelah mempelajari materi ini, kamu diharapkan mampu:

- Memahami konsep array.
- Membuat array satu dimensi.
- Mengisi data ke dalam array.
- Menampilkan isi array.
- Mengolah data menggunakan perulangan.
- Menghitung rata-rata.
- Mencari nilai terbesar dan terkecil.
- Mengenal array dua dimensi.

---

# 📌 Apa itu Array?

Array adalah kumpulan data dengan tipe yang sama yang disimpan secara berurutan di dalam memori.

Contoh:

```
Index

0   1   2   3   4

↓

80  75  90  85  88
```

Pada Bahasa C, indeks array selalu dimulai dari **0**.

---

# 📌 Deklarasi Array

Sintaks

```c
tipe_data nama_array[jumlah_elemen];
```

Contoh

```c
int nilai[5];
```

Artinya kita membuat array bertipe `int` yang mampu menyimpan 5 elemen.

---

# 📌 Mengakses Array

Contoh:

```c
nilai[0] = 90;
nilai[1] = 85;

printf("%d", nilai[0]);
```

Output

```
90
```

---

# 📌 Input dan Output Array

Biasanya array diproses menggunakan perulangan.

```c
for (int i = 0; i < 5; i++)
{
    scanf("%d", &nilai[i]);
}
```

---

# 📌 Array Dua Dimensi

Array dua dimensi digunakan untuk menyimpan data berbentuk tabel.

Contoh:

```c
int nilai[3][4];
```

Ilustrasi:

```
Baris

↓

80 75 90 88

70 85 95 90

60 80 85 87
```

---

# 📌 Kapan Array Digunakan?

Array banyak digunakan untuk:

- Menyimpan nilai mahasiswa.
- Menyimpan daftar harga.
- Menyimpan stok barang.
- Menyimpan data sensor.
- Dasar pembelajaran struktur data.

---

# 💻 Source Code

| File | Penjelasan |
|------|------------|
| array_dasar.c | Dasar array |
| input_output_array.c | Input & output array |
| mencari_nilai_terbesar.c | Nilai maksimum |
| mencari_nilai_terkecil.c | Nilai minimum |
| menghitung_rata_rata.c | Rata-rata nilai |
| array_dua_dimensi.c | Array 2 dimensi |
| latihan_array.c | Latihan |
| mini_project_nilai_mahasiswa.c | Mini Project |

---

# 🎯 Challenge

Buat program yang:

- Meminta input 10 angka.
- Menampilkan seluruh angka.
- Menghitung jumlah.
- Menghitung rata-rata.
- Menampilkan nilai terbesar.

---

# 💡 Tahukah Kamu?

Array pada Bahasa C memiliki ukuran tetap (fixed size).

Jika membuat:

```c
int angka[5];
```

Maka array tersebut hanya dapat menyimpan **5 elemen**.

Jika membutuhkan ukuran yang berubah-ubah, biasanya digunakan teknik lain seperti Dynamic Memory Allocation atau struktur data lain yang akan dipelajari pada materi lanjutan.

---

# 📖 Referensi

- The C Programming Language — Brian W. Kernighan & Dennis M. Ritchie
- ISO/IEC 9899 (C Standard)
- GCC Documentation

---

# 🧭 Navigasi

⬅️ **Sebelumnya**

[Pertemuan 06 - Perulangan](../pertemuan-06/catatan.md)

🏠 **README Utama**

*(Akan dibuat setelah seluruh seri selesai.)*

➡️ **Selanjutnya**

[Pertemuan 08 - String](../pertemuan-08/catatan.md)

---

## ✅ Progress

- [x] Memahami Array
- [x] Membuat Array
- [x] Input & Output Array
- [x] Menggunakan Perulangan pada Array
- [x] Mencari Nilai Terbesar & Terkecil
- [x] Menghitung Rata-rata
- [x] Mengenal Array Dua Dimensi

🎉 **Selamat! Kamu telah menyelesaikan Pertemuan 07.**