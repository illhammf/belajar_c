# 📖 Pertemuan 10 - Pointer

> **Seri** : Belajar Bahasa C dari Dasar hingga Mahir  
> **Pertemuan** : 10  
> **Level** : 🟡 Menengah  
> **Estimasi Waktu** : ± 120 Menit  
> **Versi Modul** : 1.0

---

## 📚 Prerequisite

Sebelum mempelajari Pointer, sebaiknya sudah memahami:

- [Pertemuan 01 - Pengenalan Bahasa C](../pertemuan-01/catatan.md)
- [Pertemuan 02 - Variabel & Tipe Data](../pertemuan-02/catatan.md)
- [Pertemuan 03 - Operator](../pertemuan-03/catatan.md)
- [Pertemuan 04 - Percabangan](../pertemuan-04/catatan.md)
- [Pertemuan 05 - Switch Case](../pertemuan-05/catatan.md)
- [Pertemuan 06 - Perulangan](../pertemuan-06/catatan.md)
- [Pertemuan 07 - Array](../pertemuan-07/catatan.md)
- [Pertemuan 08 - String](../pertemuan-08/catatan.md)
- [Pertemuan 09 - Function](../pertemuan-09/catatan.md)

---

# 📚 Pendahuluan

Pointer merupakan salah satu konsep penting dalam Bahasa C.

Pointer memungkinkan kita bekerja secara langsung dengan **alamat memori**.

Sebelum memahami Pointer, kita harus memahami bahwa setiap variabel disimpan di suatu lokasi pada memori komputer.

Contohnya:

```c
int angka = 10;
```

Secara sederhana:

```text
Variabel : angka
Nilai    : 10
Alamat   : 0x7ffe...
```

Alamat tersebut adalah lokasi tempat data `angka` disimpan di memori.

Pointer memungkinkan kita menyimpan alamat tersebut.

---

# 🎯 Tujuan Pembelajaran

Setelah menyelesaikan materi ini, diharapkan mampu:

- Memahami konsep alamat memori.
- Menggunakan operator `&`.
- Menggunakan operator `*`.
- Membuat Pointer.
- Membaca nilai melalui Pointer.
- Mengubah nilai melalui Pointer.
- Menggunakan Pointer pada Function.
- Memahami hubungan Pointer dengan Array.
- Memahami dasar Pointer Arithmetic.

---

# 📌 Apa Itu Pointer?

Pointer adalah variabel yang menyimpan **alamat memori** dari variabel lain.

Contoh:

```c
int angka = 10;
int *pointer = &angka;
```

Artinya:

```text
angka
│
├── nilai    = 10
└── alamat   = suatu alamat memori

pointer
│
└── menyimpan alamat dari angka
```

---

# 📌 Operator `&`

Operator `&` digunakan untuk mendapatkan alamat memori sebuah variabel.

Contoh:

```c
int angka = 10;

printf("%p", (void *)&angka);
```

`&angka` berarti:

> Ambil alamat memori dari variabel `angka`.

---

# 📌 Operator `*`

Operator `*` memiliki beberapa penggunaan dalam Bahasa C.

Saat deklarasi:

```c
int *pointer;
```

Artinya:

> `pointer` adalah Pointer yang menunjuk ke data bertipe `int`.

Saat digunakan pada Pointer:

```c
*pointer
```

Artinya:

> Ambil nilai yang berada pada alamat yang ditunjuk Pointer.

Proses ini disebut **dereference**.

---

# 📌 Membuat Pointer

Contoh:

```c
int angka = 10;

int *pointer = &angka;
```

Sekarang:

```text
angka
  │
  │ nilai = 10
  │
  ▼
memori

pointer
  │
  └──────► alamat angka
```

Jika:

```c
printf("%d", *pointer);
```

Maka output:

```text
10
```

---

# 📌 Address vs Value

Perhatikan kode:

```c
int angka = 10;
int *pointer = &angka;
```

### Nilai `angka`

```c
angka
```

hasilnya:

```text
10
```

### Alamat `angka`

```c
&angka
```

hasilnya berupa alamat memori.

### Nilai yang ditunjuk Pointer

```c
*pointer
```

hasilnya:

```text
10
```

Jadi:

```text
angka    → nilai
&angka   → alamat
pointer  → alamat
*pointer → nilai pada alamat tersebut
```

---

# 📌 Analogi Sederhana

Bayangkan rumah.

```text
Rumah
│
├── Alamat : Jalan Mawar No. 10
└── Isi    : Barang
```

Variabel:

```text
Variabel
│
├── Alamat memori
└── Nilai
```

Pointer ibarat secarik kertas yang menyimpan alamat rumah tersebut.

Pointer tidak menyimpan barangnya secara langsung.

Pointer menyimpan:

```text
"Barang tersebut berada di alamat ini."
```

---

# 📌 Dereference

Dereference adalah proses mengakses nilai yang berada pada alamat yang ditunjuk Pointer.

Contoh:

```c
int angka = 50;

int *pointer = &angka;

printf("%d\n", *pointer);
```

Output:

```text
50
```

Karena:

```text
pointer
   │
   ▼
alamat angka
   │
   ▼
  50
```

---

# 📌 Mengubah Nilai Melalui Pointer

Pointer tidak hanya dapat membaca nilai.

Kita juga dapat mengubah nilai melalui Pointer.

Contoh:

```c
int angka = 10;

int *pointer = &angka;

*pointer = 50;
```

Setelah kode tersebut dijalankan:

```text
angka = 50
```

Karena `pointer` menunjuk ke alamat `angka`.

---

# 📌 Pointer dan Function

Pointer sangat berguna ketika ingin Function mengubah nilai variabel yang berada di luar Function tersebut.

Contoh:

```c
void ubahNilai(int *angka)
{
    *angka = 100;
}
```

Kemudian:

```c
int nilai = 10;

ubahNilai(&nilai);
```

Setelah Function dijalankan:

```text
nilai = 100
```

---

# 📌 Pass by Value

Secara sederhana, ketika nilai biasa dikirim ke Function:

```c
void ubah(int angka)
{
    angka = 100;
}
```

Kemudian:

```c
int nilai = 10;

ubah(nilai);
```

Nilai asli `nilai` tetap:

```text
10
```

Karena Function menerima salinan nilai.

---

# 📌 Menggunakan Pointer untuk Mengubah Data Asli

Dengan Pointer:

```c
void ubah(int *angka)
{
    *angka = 100;
}
```

Pemanggilan:

```c
int nilai = 10;

ubah(&nilai);
```

Sekarang:

```text
nilai = 100
```

Karena Function mendapatkan alamat dari `nilai`.

---

# 📌 Pointer dan Array

Array memiliki hubungan yang sangat erat dengan Pointer.

Contoh:

```c
int angka[] = {10, 20, 30};
```

Nama Array dapat digunakan sebagai alamat elemen pertama dalam banyak konteks ekspresi.

Secara sederhana:

```c
angka
```

mengacu ke lokasi elemen pertama.

Sedangkan:

```c
&angka[0]
```

adalah alamat elemen pertama.

Contoh:

```c
printf("%d\n", *angka);
```

akan menghasilkan:

```text
10
```

---

# 📌 Pointer Arithmetic

Pointer dapat digunakan untuk berpindah antar elemen dalam Array.

Contoh:

```c
int angka[] = {10, 20, 30};

int *pointer = angka;
```

Kemudian:

```c
printf("%d\n", *pointer);
printf("%d\n", *(pointer + 1));
printf("%d\n", *(pointer + 2));
```

Output:

```text
10
20
30
```

Pointer berpindah berdasarkan ukuran tipe data yang ditunjuk.

---

# 📌 Jangan Sembarangan Mengakses Alamat

Pointer memberikan akses yang sangat dekat dengan memori.

Karena itu, Pointer harus digunakan dengan hati-hati.

Contoh yang berbahaya:

```c
int *pointer;

printf("%d", *pointer);
```

Pointer tersebut belum menunjuk ke lokasi yang valid.

Ini dapat menyebabkan **undefined behavior**.

Lebih aman:

```c
int angka = 10;

int *pointer = &angka;

printf("%d", *pointer);
```

---

# 📌 NULL Pointer

Pointer dapat dibuat dengan nilai `NULL`.

Contoh:

```c
int *pointer = NULL;
```

Artinya Pointer tersebut belum menunjuk ke objek yang valid.

Sebelum melakukan dereference, periksa terlebih dahulu:

```c
if (pointer != NULL)
{
    printf("%d", *pointer);
}
```

Jangan melakukan:

```c
*pointer
```

jika `pointer == NULL`.

---

# 📌 Format Specifier Alamat

Untuk mencetak alamat, gunakan:

```c
%p
```

Contoh:

```c
printf("%p", (void *)&angka);
```

Casting ke `(void *)` digunakan agar argumen sesuai dengan format `%p`.

---

# 🧠 Konsep Penting

Ingat tiga hal berikut:

```text
&  → mendapatkan alamat
*  → mengakses nilai dari alamat
int *pointer → membuat Pointer ke int
```

Contoh:

```c
int angka = 10;

int *pointer = &angka;

printf("%p\n", (void *)&angka);
printf("%p\n", (void *)pointer);
printf("%d\n", *pointer);
```

Secara konsep:

```text
&angka
  ↓
alamat angka

pointer
  ↓
alamat angka

*pointer
  ↓
nilai angka
```

---

# 💻 Source Code

| File | Materi |
|---|---|
| `alamat_variabel.c` | Melihat alamat variabel |
| `pointer_dasar.c` | Pointer dasar |
| `pointer_dereference.c` | Dereference |
| `pointer_mengubah_nilai.c` | Mengubah nilai melalui Pointer |
| `pointer_dan_function.c` | Pointer dan Function |
| `pointer_dan_array.c` | Pointer dan Array |
| `pointer_aritmatika.c` | Pointer Arithmetic |
| `latihan_pointer.c` | Latihan |
| `mini_project_pointer.c` | Mini Project |

---

# 🎯 Challenge

## Challenge 1 - Alamat Variabel

Buat program yang memiliki:

```c
int angka = 100;
```

Kemudian tampilkan:

- Nilai angka.
- Alamat angka.
- Nilai angka melalui Pointer.

---

## Challenge 2 - Tukar Nilai

Buat Function:

```c
void tukar(int *a, int *b)
```

yang digunakan untuk menukar dua nilai.

Contoh:

```text
Sebelum:
a = 10
b = 20

Sesudah:
a = 20
b = 10
```

---

## Challenge 3 - Array dan Pointer

Buat Array:

```c
int angka[] = {10, 20, 30, 40, 50};
```

Kemudian tampilkan semua data menggunakan Pointer.

---

# 🚀 Mini Project

Pada Mini Project Pertemuan 10, kita akan membuat program pengolahan nilai menggunakan:

- Array
- Function
- Pointer

Program akan memiliki Function:

```text
inputNilai()
hitungTotal()
hitungRataRata()
cariTerbesar()
cariTerkecil()
tampilkanData()
```

Pointer akan digunakan untuk beberapa proses yang membutuhkan perubahan data secara langsung.

---

# ❌ Common Mistakes

## 1. Dereference Pointer yang belum valid

Salah:

```c
int *pointer;

printf("%d", *pointer);
```

Pointer belum menunjuk ke objek yang valid.

---

## 2. Lupa menggunakan `&`

Salah:

```c
int angka = 10;

int *pointer = angka;
```

Benar:

```c
int angka = 10;

int *pointer = &angka;
```

---

## 3. Salah memahami `*`

Deklarasi:

```c
int *pointer;
```

berarti `pointer` adalah Pointer ke `int`.

Sedangkan:

```c
*pointer
```

berarti mengambil nilai dari alamat yang ditunjuk.

---

## 4. Dereference NULL

Jangan:

```c
int *pointer = NULL;

printf("%d", *pointer);
```

Periksa terlebih dahulu:

```c
if (pointer != NULL)
{
    printf("%d", *pointer);
}
```

---

# 🧠 Ringkasan

Konsep utama Pointer:

```c
int angka = 10;

int *pointer = &angka;
```

Kemudian:

```c
angka
```

adalah:

```text
nilai
```

```c
&angka
```

adalah:

```text
alamat angka
```

```c
pointer
```

adalah:

```text
alamat yang disimpan
```

```c
*pointer
```

adalah:

```text
nilai pada alamat tersebut
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
🔥 10. Pointer
⏳ 11. Structure
⏳ 12. File Handling
🏆 13. Final Project
```

---

# 🧭 Navigasi

⬅️ [Pertemuan 09 - Function](../pertemuan-09/catatan.md)

🏠 [README Utama](../README.md)

➡️ [Pertemuan 11 - Structure](../pertemuan-11/catatan.md)

---

# ✅ Progress

- [x] Memahami alamat memori
- [x] Operator `&`
- [x] Operator `*`
- [x] Membuat Pointer
- [x] Dereference
- [x] Mengubah nilai melalui Pointer
- [x] Pointer dan Function
- [x] Pointer dan Array
- [x] Pointer Arithmetic
- [x] NULL Pointer

---

# 🎉 Kesimpulan

Pointer merupakan salah satu fitur yang membuat Bahasa C sangat powerful.

Pointer memungkinkan kita bekerja dengan alamat memori dan mengubah data secara langsung melalui alamat tersebut.

Konsep paling penting yang harus diingat:

```text
&  → alamat
*  → nilai pada alamat
```

Contoh:

```c
int angka = 10;

int *pointer = &angka;

printf("%d", *pointer);
```

Output:

```text
10
```

Jangan terburu-buru menghafalkan Pointer.

Pahami dulu hubungan:

```text
Variabel
   ↓
Nilai
   ↓
Alamat Memori
   ↓
Pointer
   ↓
Dereference
```

Setelah konsep tersebut benar-benar dipahami, penggunaan Pointer pada Function, Array, dan Structure akan jauh lebih mudah.

**Selamat! Kamu telah menyelesaikan materi teori Pertemuan 10.** 🚀