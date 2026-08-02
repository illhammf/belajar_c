# 📖 Pertemuan 03 - Operator dalam Bahasa C

> **Seri** : Belajar Bahasa C dari Dasar hingga Mahir
>
> **Pertemuan** : 03
>
> **Level** : 🟢 Pemula
>
> **Estimasi Waktu** : ± 60 Menit
>
> **Versi Modul** : 1.0
>
> **Prerequisite**
>
> - Pertemuan 01 - Pengenalan Bahasa C
> - Pertemuan 02 - Variabel dan Tipe Data
>
> **Source Code**
>
> - `operator_aritmatika.c`
> - `operator_penugasan.c`
> - `operator_perbandingan.c`
> - `operator_logika.c`
> - `increment_decrement.c`
> - `latihan_operator.c`

---

# 📚 Pendahuluan

Pada pertemuan sebelumnya kita telah belajar bagaimana menyimpan data menggunakan **variabel**.

Namun, menyimpan data saja belum cukup.

Komputer harus dapat **mengolah**, **membandingkan**, dan **mengambil keputusan** berdasarkan data tersebut.

Contohnya:

- Menghitung total belanja.
- Menghitung rata-rata nilai.
- Menentukan apakah seseorang lulus.
- Membandingkan umur.
- Memeriksa username dan password.

Semua proses tersebut menggunakan **Operator**.

---

# 🎯 Tujuan Pembelajaran

Setelah mempelajari materi ini, kamu diharapkan mampu:

- Memahami fungsi operator.
- Menggunakan operator aritmatika.
- Menggunakan operator penugasan.
- Menggunakan operator perbandingan.
- Menggunakan operator logika.
- Memahami Increment dan Decrement.
- Menggabungkan beberapa operator dalam satu program.

---

# 📌 Apa itu Operator?

Operator adalah simbol yang digunakan untuk melakukan suatu operasi terhadap satu atau lebih nilai (operand).

Contoh sederhana:

```c
5 + 3
```

Operatornya adalah

```
+
```

Sedangkan

```
5
```

dan

```
3
```

disebut sebagai **operand**.

---

# 📌 Operator Aritmatika

Operator aritmatika digunakan untuk melakukan operasi matematika.

| Operator | Fungsi |
|----------|---------|
| + | Penjumlahan |
| - | Pengurangan |
| * | Perkalian |
| / | Pembagian |
| % | Sisa Pembagian (Modulo) |

Contoh

```c
int a = 10;
int b = 3;

printf("%d\n", a + b);
printf("%d\n", a - b);
printf("%d\n", a * b);
printf("%d\n", a / b);
printf("%d\n", a % b);
```

Output

```
13
7
30
3
1
```

> **Catatan**
>
> Jika kedua angka bertipe `int`, maka hasil pembagian juga berupa bilangan bulat.

---

# 📌 Operator Penugasan (Assignment)

Operator ini digunakan untuk memberikan nilai kepada variabel.

| Operator | Contoh | Sama Dengan |
|----------|---------|-------------|
| = | x = 5 | x = 5 |
| += | x += 2 | x = x + 2 |
| -= | x -= 2 | x = x - 2 |
| *= | x *= 2 | x = x * 2 |
| /= | x /= 2 | x = x / 2 |
| %= | x %= 2 | x = x % 2 |

Contoh

```c
int angka = 10;

angka += 5;

printf("%d", angka);
```

Output

```
15
```

---

# 📌 Operator Perbandingan

Operator ini digunakan untuk membandingkan dua nilai.

| Operator | Arti |
|----------|------|
| == | Sama dengan |
| != | Tidak sama dengan |
| > | Lebih besar |
| < | Lebih kecil |
| >= | Lebih besar atau sama |
| <= | Lebih kecil atau sama |

Contoh

```c
int a = 10;
int b = 20;

printf("%d", a < b);
```

Output

```
1
```

Dalam Bahasa C:

```
1 = TRUE

0 = FALSE
```

---

# 📌 Operator Logika

Operator logika digunakan untuk menggabungkan dua atau lebih kondisi.

| Operator | Arti |
|----------|------|
| && | AND |
| \|\| | OR |
| ! | NOT |

Contoh

```c
int umur = 20;
int punyaSIM = 1;

printf("%d", umur >= 17 && punyaSIM);
```

Output

```
1
```

---

## Truth Table

### AND (&&)

| A | B | Hasil |
|---|---|-------|
| 0 | 0 | 0 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 1 |

---

### OR (||)

| A | B | Hasil |
|---|---|-------|
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 1 |

---

### NOT (!)

| A | Hasil |
|---|-------|
| 1 | 0 |
| 0 | 1 |

---

# 📌 Increment dan Decrement

Increment digunakan untuk menambah nilai sebesar **1**.

```c
x++;
```

Sama dengan

```c
x = x + 1;
```

Decrement digunakan untuk mengurangi nilai sebesar **1**.

```c
x--;
```

Sama dengan

```c
x = x - 1;
```

Contoh

```c
int x = 10;

x++;

printf("%d", x);
```

Output

```
11
```

---

# 📌 Prefix dan Postfix

Postfix

```c
x++;
```

Prefix

```c
++x;
```

Keduanya sama-sama menambah nilai, tetapi waktu penambahannya berbeda.

Materi ini akan lebih sering digunakan saat belajar **perulangan (looping)**.

---

# 💻 Source Code

| File | Penjelasan |
|------|------------|
| operator_aritmatika.c | Operator matematika |
| operator_penugasan.c | Assignment Operator |
| operator_perbandingan.c | Relational Operator |
| operator_logika.c | Logical Operator |
| increment_decrement.c | Increment & Decrement |
| latihan_operator.c | Studi kasus sederhana |

---

# 🎯 Challenge

Buatlah program kalkulator sederhana yang meminta input:

- Angka pertama
- Angka kedua

Kemudian tampilkan:

- Penjumlahan
- Pengurangan
- Perkalian
- Pembagian
- Sisa Pembagian

Selanjutnya tampilkan hasil:

- Apakah angka pertama lebih besar dari angka kedua?
- Apakah kedua angka sama?
- Apakah kedua angka berbeda?

---

# 💡 Tahukah Kamu?

Banyak pemula bingung ketika menjalankan kode berikut:

```c
printf("%d", 10 / 3);
```

Hasilnya adalah

```
3
```

bukan

```
3.333333
```

Mengapa?

Karena kedua angka bertipe **int**, sehingga hasil pembagian juga berupa **int**.

Jika ingin hasil desimal, ubah salah satu operand menjadi `float` atau `double`.

Contoh:

```c
printf("%.2f", 10.0 / 3);
```

Output

```
3.33
```

---

# 📖 Referensi

- The C Programming Language — Brian W. Kernighan & Dennis M. Ritchie
- ISO/IEC 9899 (C Standard)
- GCC Documentation

---

# 🧭 Navigasi

⬅️ **Sebelumnya**

[Pertemuan 02 - Variabel dan Tipe Data](../pertemuan-02/catatan.md)

🏠 **README Utama**

*(Akan dibuat setelah seluruh seri selesai.)*

➡️ **Selanjutnya**

[Pertemuan 04 - Percabangan (If, Else, Else If)](../pertemuan-04/catatan.md)

---

## ✅ Progress

- [x] Memahami Operator
- [x] Operator Aritmatika
- [x] Operator Penugasan
- [x] Operator Perbandingan
- [x] Operator Logika
- [x] Increment & Decrement

🎉 **Selamat! Kamu telah menyelesaikan Pertemuan 03.**