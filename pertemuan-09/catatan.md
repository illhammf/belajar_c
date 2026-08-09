# 📖 Pertemuan 09 - Function

> **Seri** : Belajar Bahasa C dari Dasar hingga Mahir  
> **Pertemuan** : 09  
> **Level** : 🟢 Pemula  
> **Estimasi Waktu** : ± 90 Menit  
> **Versi Modul** : 1.0

---

## 📚 Prerequisite

Sebelum mempelajari Function, sebaiknya sudah memahami:

- [Pertemuan 01 - Pengenalan Bahasa C](../pertemuan-01/catatan.md)
- [Pertemuan 02 - Variabel & Tipe Data](../pertemuan-02/catatan.md)
- [Pertemuan 03 - Operator](../pertemuan-03/catatan.md)
- [Pertemuan 04 - Percabangan](../pertemuan-04/catatan.md)
- [Pertemuan 05 - Switch Case](../pertemuan-05/catatan.md)
- [Pertemuan 06 - Perulangan](../pertemuan-06/catatan.md)
- [Pertemuan 07 - Array](../pertemuan-07/catatan.md)
- [Pertemuan 08 - String](../pertemuan-08/catatan.md)

---

# 📚 Pendahuluan

Pada pertemuan sebelumnya, sebagian besar kode program masih ditulis di dalam fungsi `main()`.

Contohnya:

```c
#include <stdio.h>

int main()
{
    int angka1;
    int angka2;
    int hasil;

    printf("Masukkan angka pertama: ");
    scanf("%d", &angka1);

    printf("Masukkan angka kedua: ");
    scanf("%d", &angka2);

    hasil = angka1 + angka2;

    printf("Hasil: %d\n", hasil);

    return 0;
}
```

Untuk program sederhana, cara tersebut masih cukup.

Namun, ketika program menjadi lebih besar, menempatkan seluruh logika di dalam `main()` akan membuat kode menjadi panjang dan sulit dipelihara.

Misalnya sebuah program memiliki:

- Login
- Menu
- Perhitungan
- Validasi
- Pengolahan data
- Laporan

Jika semuanya berada di dalam `main()`, kode akan semakin sulit dibaca.

Di sinilah **Function** digunakan.

---

# 🎯 Tujuan Pembelajaran

Setelah menyelesaikan pertemuan ini, diharapkan mampu:

- Memahami konsep Function.
- Membuat Function sendiri.
- Memanggil Function.
- Menggunakan parameter.
- Menggunakan argument.
- Menggunakan `return`.
- Menggunakan Function bertipe `void`.
- Menggunakan beberapa parameter.
- Mengirim Array ke Function.
- Memahami Function Prototype.
- Membuat program yang lebih modular.

---

# 📌 Apa Itu Function?

Function adalah sekumpulan instruksi yang dibuat untuk menjalankan tugas tertentu.

Daripada menulis kode yang sama berkali-kali, kita dapat membuat Function sekali dan memanggilnya ketika dibutuhkan.

Contoh:

```c
void salam()
{
    printf("Halo, selamat datang!\n");
}
```

Function tersebut dapat dipanggil:

```c
salam();
```

Jika dipanggil beberapa kali:

```c
salam();
salam();
salam();
```

Maka kode di dalam Function akan dijalankan setiap kali Function dipanggil.

---

# 🧠 Kenapa Function Dibutuhkan?

Function membantu kita membuat program menjadi:

- Lebih rapi.
- Lebih mudah dibaca.
- Lebih mudah dipelihara.
- Lebih mudah diuji.
- Mengurangi duplikasi kode.
- Lebih mudah dikembangkan.

Contohnya program tanpa Function:

```text
main()
│
├── Login
├── Perhitungan
├── Menu
├── Validasi
├── Laporan
└── Exit
```

Sedangkan dengan Function:

```text
main()
│
├── login()
├── hitungTotal()
├── tampilkanMenu()
├── validasi()
└── tampilkanLaporan()
```

`main()` sekarang lebih fokus mengatur alur program.

---

# 📌 Struktur Dasar Function

Secara umum Function memiliki struktur:

```c
return_type nama_function(parameter)
{
    // kode yang dijalankan
}
```

Contoh:

```c
int tambah(int a, int b)
{
    return a + b;
}
```

Penjelasan:

| Bagian | Fungsi |
|---|---|
| `int` | Tipe data yang dikembalikan |
| `tambah` | Nama Function |
| `int a` | Parameter pertama |
| `int b` | Parameter kedua |
| `return` | Mengembalikan hasil |

---

# 📌 Function Tanpa Parameter

Function tidak selalu membutuhkan parameter.

Contoh:

```c
void salam()
{
    printf("Halo Dunia!\n");
}
```

Untuk memanggilnya:

```c
salam();
```

Contoh lengkap:

```c
#include <stdio.h>

void salam()
{
    printf("Halo Dunia!\n");
}

int main()
{
    salam();

    return 0;
}
```

Output:

```text
Halo Dunia!
```

---

# 📌 Function Dengan Parameter

Parameter digunakan untuk menerima data dari luar Function.

Contoh:

```c
void tampilkanNama(char nama[])
{
    printf("Nama: %s\n", nama);
}
```

Kemudian:

```c
tampilkanNama("Ilham");
```

Output:

```text
Nama: Ilham
```

Dalam contoh tersebut:

```c
char nama[]
```

adalah parameter.

Sedangkan:

```c
"Ilham"
```

adalah argument.

---

# 📌 Parameter vs Argument

Kedua istilah ini sering membingungkan pemula.

Perhatikan:

```c
int tambah(int a, int b)
{
    return a + b;
}
```

`a` dan `b` disebut **parameter**.

Ketika Function dipanggil:

```c
tambah(10, 20);
```

`10` dan `20` disebut **argument**.

Secara sederhana:

```text
Function dibuat
       ↓
parameter

Function dipanggil
       ↓
argument
```

---

# 📌 Function Dengan Return

Function dapat mengembalikan sebuah nilai menggunakan `return`.

Contoh:

```c
int tambah(int a, int b)
{
    return a + b;
}
```

Kemudian:

```c
int hasil;

hasil = tambah(10, 20);
```

Nilai `hasil` adalah:

```text
30
```

Function tersebut memiliki return type:

```c
int
```

karena menghasilkan nilai bertipe integer.

---

# 📌 Contoh Return

```c
#include <stdio.h>

int tambah(int a, int b)
{
    return a + b;
}

int main()
{
    int hasil;

    hasil = tambah(10, 20);

    printf("Hasil: %d\n", hasil);

    return 0;
}
```

Output:

```text
Hasil: 30
```

---

# 📌 Function `void`

`void` digunakan ketika Function tidak mengembalikan nilai.

Contoh:

```c
void tampilkanPesan()
{
    printf("Belajar Bahasa C\n");
}
```

Function tersebut hanya melakukan aksi.

Tidak ada nilai yang dikembalikan.

---

# 📌 Perbandingan `void` dan `return`

### Function `void`

```c
void salam()
{
    printf("Halo!\n");
}
```

Tidak mengembalikan nilai.

### Function dengan return

```c
int tambah(int a, int b)
{
    return a + b;
}
```

Mengembalikan nilai integer.

---

# 📌 Multiple Parameter

Function dapat memiliki lebih dari satu parameter.

Contoh:

```c
int perkalian(int a, int b)
{
    return a * b;
}
```

Function tersebut memiliki dua parameter:

```c
a
b
```

Contoh lain:

```c
float hitungRataRata(float nilai1, float nilai2, float nilai3)
{
    return (nilai1 + nilai2 + nilai3) / 3;
}
```

---

# 📌 Function Prototype

Function Prototype digunakan untuk memberitahu compiler mengenai sebuah Function sebelum Function tersebut digunakan.

Contoh:

```c
#include <stdio.h>

int tambah(int a, int b);

int main()
{
    int hasil;

    hasil = tambah(10, 20);

    printf("Hasil: %d\n", hasil);

    return 0;
}

int tambah(int a, int b)
{
    return a + b;
}
```

Perhatikan bagian:

```c
int tambah(int a, int b);
```

Itulah Function Prototype.

---

# 📌 Kenapa Function Prototype Dibutuhkan?

Misalnya Function dibuat setelah `main()`:

```c
int main()
{
    int hasil = tambah(10, 20);

    return 0;
}

int tambah(int a, int b)
{
    return a + b;
}
```

Compiler dapat menemukan bahwa Function `tambah()` belum dikenal ketika dipanggil.

Dengan Prototype:

```c
int tambah(int a, int b);
```

compiler sudah mengetahui bahwa Function tersebut tersedia.

---

# 📌 Function dan Array

Array dapat dikirim ke Function.

Contoh:

```c
void tampilkanArray(int angka[], int ukuran)
{
    for (int i = 0; i < ukuran; i++)
    {
        printf("%d ", angka[i]);
    }
}
```

Kemudian:

```c
int angka[] = {10, 20, 30, 40, 50};

tampilkanArray(angka, 5);
```

Output:

```text
10 20 30 40 50
```

Perhatikan bahwa kita juga mengirim ukuran Array.

```c
tampilkanArray(angka, 5);
```

Function tidak secara otomatis mengetahui jumlah elemen Array ketika menerima parameter seperti ini.

---

# 📌 Function untuk Menghitung Rata-Rata

Function dapat digunakan untuk memisahkan proses tertentu.

Contoh:

```c
float hitungRataRata(int nilai[], int jumlah)
{
    int total = 0;

    for (int i = 0; i < jumlah; i++)
    {
        total += nilai[i];
    }

    return (float) total / jumlah;
}
```

Kemudian:

```c
int nilai[] = {80, 75, 90, 85, 95};

float rataRata = hitungRataRata(nilai, 5);
```

---

# 🧠 Konsep Modular Programming

Dengan Function, kita mulai mengenal konsep **Modular Programming**.

Program besar dapat dipecah menjadi bagian-bagian kecil.

Contoh:

```text
Program
│
├── Input
│   ├── inputNama()
│   └── inputNilai()
│
├── Perhitungan
│   ├── hitungTotal()
│   └── hitungRataRata()
│
└── Output
    ├── tampilkanData()
    └── tampilkanHasil()
```

Setiap Function memiliki tanggung jawab tertentu.

Konsep seperti ini akan sangat berguna ketika nanti membuat project yang lebih besar.

---

# 📌 Prinsip Single Responsibility

Salah satu kebiasaan baik dalam pemrograman adalah membuat Function memiliki **satu tanggung jawab utama**.

Contoh yang baik:

```c
int tambah(int a, int b)
{
    return a + b;
}
```

Function tersebut fokus melakukan penjumlahan.

Hindari membuat satu Function yang melakukan terlalu banyak hal sekaligus:

```text
input data
↓
validasi
↓
menghitung
↓
menyimpan file
↓
menampilkan laporan
```

Lebih baik dipecah menjadi beberapa Function.

---

# ❌ Common Mistakes

## 1. Lupa `return`

Salah:

```c
int tambah(int a, int b)
{
    a + b;
}
```

Benar:

```c
int tambah(int a, int b)
{
    return a + b;
}
```

---

## 2. Return Type Tidak Sesuai

Contoh yang tidak tepat:

```c
void tambah(int a, int b)
{
    return a + b;
}
```

Jika ingin mengembalikan hasil integer:

```c
int tambah(int a, int b)
{
    return a + b;
}
```

---

## 3. Parameter Tidak Sesuai

Misalnya Function:

```c
int tambah(int a, int b)
```

Maka pemanggilan yang benar:

```c
tambah(10, 20);
```

Pastikan jumlah dan tipe argument sesuai dengan kebutuhan Function.

---

## 4. Lupa Function Prototype

Jika Function didefinisikan setelah `main()`, gunakan Prototype:

```c
int tambah(int a, int b);
```

---

## 5. Membuat Function Terlalu Besar

Hindari Function yang mengerjakan terlalu banyak pekerjaan.

Lebih baik:

```c
inputData();
hitungNilai();
tampilkanHasil();
```

daripada satu Function yang menangani semuanya.

---

# 💻 Source Code

Pada pertemuan ini kita akan membuat:

| File | Materi |
|---|---|
| `fungsi_sederhana.c` | Function dasar |
| `fungsi_parameter.c` | Function dengan parameter |
| `fungsi_return.c` | Function dengan return |
| `fungsi_multiple_parameter.c` | Multiple parameter |
| `fungsi_void.c` | Function `void` |
| `fungsi_dengan_array.c` | Function dengan Array |
| `latihan_function.c` | Latihan |
| `mini_project_kalkulator_function.c` | Mini Project |

---

# 🎯 Challenge

## Challenge 1 - Function Kuadrat

Buat Function:

```c
int kuadrat(int angka)
```

yang mengembalikan hasil kuadrat.

Contoh:

```text
Input  : 5
Output : 25
```

---

## Challenge 2 - Function Ganjil Genap

Buat Function:

```c
void cekGanjilGenap(int angka)
```

Contoh:

```text
Input : 10

Output:
10 adalah bilangan genap.
```

---

## Challenge 3 - Function Nilai Terbesar

Buat Function:

```c
int nilaiTerbesar(int angka[], int jumlah)
```

Function harus mengembalikan nilai terbesar dari Array.

---

# 🚀 Mini Project

Pada mini project kita akan membuat **Kalkulator menggunakan Function**.

Menu:

```text
===== KALKULATOR =====

1. Penjumlahan
2. Pengurangan
3. Perkalian
4. Pembagian
5. Keluar
```

Setiap operasi dibuat menjadi Function:

```c
tambah()
kurang()
kali()
bagi()
```

Contoh:

```c
int tambah(int a, int b)
{
    return a + b;
}
```

Kemudian `main()` bertugas mengatur alur program.

---

# 🎯 Target Mini Project

Program diharapkan memiliki struktur seperti:

```text
main()
│
├── tampilkanMenu()
│
├── tambah()
│
├── kurang()
│
├── kali()
│
├── bagi()
│
└── selesai
```

Dengan struktur tersebut, kode menjadi lebih mudah dibaca dan dikembangkan.

---

# 🧪 Latihan Mandiri

Sebelum melihat solusi mini project, coba buat sendiri program kalkulator menggunakan Function.

Minimal Function:

```c
int tambah(int a, int b);
int kurang(int a, int b);
int kali(int a, int b);
float bagi(float a, float b);
```

Kemudian gunakan `switch` untuk menentukan Function mana yang dipanggil.

---

# 💡 Tips Belajar

Jangan hanya menghafalkan:

```c
return
```

atau:

```c
parameter
```

Cobalah memahami alurnya:

```text
Data
 ↓
Function
 ↓
Diproses
 ↓
Return
 ↓
Hasil
```

Contoh:

```text
10 + 20
   ↓
tambah(10, 20)
   ↓
10 + 20
   ↓
return 30
   ↓
hasil = 30
```

---

# 🧭 Navigasi

⬅️ [Pertemuan 08 - String](../pertemuan-08/catatan.md)

🏠 [README Utama](../README.md)

➡️ [Pertemuan 10 - Pointer](../pertemuan-10/catatan.md)

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
🔥 09. Function
⏳ 10. Pointer
⏳ 11. Structure
⏳ 12. File Handling
🏆 13. Final Project
```

---

# ✅ Progress

- [x] Memahami Function
- [x] Function tanpa parameter
- [x] Function dengan parameter
- [x] Function dengan return
- [x] Function `void`
- [x] Multiple parameter
- [x] Function Prototype
- [x] Function dengan Array
- [x] Modular Programming

---

# 🎉 Kesimpulan

Function merupakan salah satu konsep fundamental dalam pemrograman.

Dengan Function, program dapat dipecah menjadi bagian-bagian kecil yang memiliki tugas masing-masing.

Contoh:

```c
int tambah(int a, int b)
{
    return a + b;
}
```

Kemudian dapat digunakan berkali-kali:

```c
int hasil1 = tambah(10, 20);
int hasil2 = tambah(50, 30);
```

Hasil:

```text
hasil1 = 30
hasil2 = 80
```

Semakin besar program yang dibuat, semakin penting konsep Function.

**Selamat! Kamu telah menyelesaikan materi teori Pertemuan 09.** 🚀