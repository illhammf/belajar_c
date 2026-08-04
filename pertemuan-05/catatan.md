# 📖 Pertemuan 05 - Switch Case

> **Seri** : Belajar Bahasa C dari Dasar hingga Mahir
>
> **Pertemuan** : 05
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
> - Pertemuan 02 - Variabel & Tipe Data
> - Pertemuan 03 - Operator
> - Pertemuan 04 - Percabangan
>
> **Source Code**
>
> - `switch_dasar.c`
> - `switch_menu.c`
> - `switch_huruf.c`
> - `break_statement.c`
> - `default_case.c`
> - `latihan_switch.c`
> - `mini_project_kalkulator_menu.c`

---

# 📚 Pendahuluan

Pada pertemuan sebelumnya kita telah mempelajari percabangan menggunakan `if`, `if...else`, dan `if...else if`.

Namun, jika kita memiliki banyak pilihan berdasarkan **satu variabel**, penggunaan `if...else if` akan semakin panjang dan sulit dibaca.

Bahasa C menyediakan solusi berupa **Switch Case**.

Switch Case membuat kode lebih ringkas, mudah dipahami, dan sering digunakan untuk membuat menu pada aplikasi berbasis terminal (CLI).

---

# 🎯 Tujuan Pembelajaran

Setelah mempelajari materi ini, kamu diharapkan mampu:

- Memahami konsep Switch Case.
- Menggunakan `case`.
- Menggunakan `break`.
- Menggunakan `default`.
- Membuat menu sederhana menggunakan Switch Case.

---

# 📌 Apa itu Switch Case?

Switch Case adalah bentuk percabangan yang digunakan untuk memilih satu aksi berdasarkan nilai dari sebuah variabel.

Ilustrasi:

```
Pilih Menu

↓

1 → Lihat Data

2 → Tambah Data

3 → Hapus Data

4 → Keluar
```

---

# 📌 Sintaks Dasar

```c
switch (pilihan)
{
    case 1:
        printf("Menu 1");
        break;

    case 2:
        printf("Menu 2");
        break;

    default:
        printf("Pilihan tidak tersedia");
}
```

---

# 📌 Fungsi `break`

`break` digunakan untuk menghentikan eksekusi pada sebuah `case`.

Tanpa `break`, program akan melanjutkan eksekusi ke `case` berikutnya (fall-through).

---

# 📌 Fungsi `default`

`default` akan dijalankan jika tidak ada `case` yang sesuai.

Contoh:

```text
Input : 9

Output :

Pilihan tidak tersedia.
```

---

# 📌 Kapan Menggunakan Switch?

✅ Cocok digunakan untuk:

- Menu aplikasi
- Pilihan angka
- Pilihan huruf
- Status tertentu

❌ Kurang cocok untuk:

- Nilai rentang (`>=`, `<=`)
- Kondisi yang melibatkan operator logika (`&&`, `||`)

Untuk kasus tersebut, gunakan `if...else`.

---

# 💻 Source Code

| File | Penjelasan |
|------|------------|
| switch_dasar.c | Dasar penggunaan switch |
| switch_menu.c | Menu sederhana |
| switch_huruf.c | Switch menggunakan karakter |
| break_statement.c | Fungsi `break` |
| default_case.c | Fungsi `default` |
| latihan_switch.c | Latihan membuat menu |
| mini_project_kalkulator_menu.c | Mini project |

---

# 🎯 Challenge

Buat program yang menampilkan menu:

```
===== MENU =====

1. Makanan
2. Minuman
3. Dessert
4. Keluar
```

Jika pengguna memilih salah satu menu, tampilkan pesan yang sesuai.

---

# 💡 Tahukah Kamu?

Pada Bahasa C, `switch` hanya dapat digunakan dengan tipe data tertentu seperti `int` dan `char`.

Kamu **tidak dapat** menggunakan `switch` secara langsung untuk membandingkan `float` atau `string`.

---

# 📖 Referensi

- The C Programming Language — Brian W. Kernighan & Dennis M. Ritchie
- ISO/IEC 9899 (C Standard)
- GCC Documentation

---

# 🧭 Navigasi

⬅️ **Sebelumnya**

[Pertemuan 04 - Percabangan](../pertemuan-04/catatan.md)

🏠 **README Utama**

*(Akan dibuat setelah seluruh seri selesai.)*

➡️ **Selanjutnya**

[Pertemuan 06 - Perulangan (Looping)](../pertemuan-06/catatan.md)

---

## ✅ Progress

- [x] Memahami Switch Case
- [x] Memahami `case`
- [x] Memahami `break`
- [x] Memahami `default`

🎉 **Selamat! Kamu telah menyelesaikan Pertemuan 05.**