# 📖 Pertemuan 08 - String dalam Bahasa C

> **Seri** : Belajar Bahasa C dari Dasar hingga Mahir
>
> **Pertemuan** : 08
>
> **Level** : 🟢 Pemula
>
> **Estimasi Waktu** : ± 90 Menit
>
> **Versi Modul** : 1.0

---

# 📚 Pendahuluan

Pada pertemuan sebelumnya kita mempelajari Array.

String sebenarnya adalah array yang berisi kumpulan karakter.

Contoh:

```c
char nama[] = "Ilham";
```

Di dalam memori, string tersebut disimpan seperti berikut:

```
Index

0    1    2    3    4    5

↓

I    l    h    a    m   \0
```

Karakter `\0` menandakan akhir sebuah string.

---

# 🎯 Tujuan Pembelajaran

Setelah mempelajari materi ini, kamu mampu:

- Memahami konsep String.
- Menggunakan `char[]`.
- Input string menggunakan `scanf()` dan `fgets()`.
- Menggunakan library `<string.h>`.
- Menggunakan fungsi:
  - strlen()
  - strcpy()
  - strcmp()
  - strcat()

---

# 📌 Deklarasi String

```c
char nama[50];
```

atau

```c
char nama[] = "Ilham";
```

---

# 📌 Input String

Dengan scanf

```c
scanf("%s", nama);
```

Kelemahan:

Hanya membaca sampai spasi pertama.

---

Dengan fgets

```c
fgets(nama, sizeof(nama), stdin);
```

Kelebihan:

- Bisa membaca spasi.
- Lebih aman dibanding gets().

---

# 📌 Library string.h

Library ini menyediakan banyak fungsi untuk mempermudah manipulasi string.

Fungsi yang paling sering digunakan:

- strlen()
- strcpy()
- strcmp()
- strcat()

---

# 📌 strlen()

Menghitung panjang string.

---

# 📌 strcpy()

Menyalin string.

---

# 📌 strcmp()

Membandingkan dua string.

---

# 📌 strcat()

Menggabungkan dua string.

---

# 💻 Source Code

- string_dasar.c
- input_string.c
- fungsi_strlen.c
- fungsi_strcpy.c
- fungsi_strcmp.c
- fungsi_strcat.c
- latihan_string.c
- mini_project_biodata_mahasiswa.c

---

# 🎯 Challenge

Buat program yang:

- Input nama
- Input alamat
- Input jurusan
- Tampilkan kembali seluruh data tersebut.

---

# 💡 Tahukah Kamu?

Di Bahasa C, **operator `==` tidak digunakan untuk membandingkan isi string**.

Gunakan:

```c
strcmp()
```

---

# 📖 Referensi

- The C Programming Language
- C Standard Library

---

# 🧭 Navigasi

⬅️ Pertemuan 07 - Array

➡️ Pertemuan 09 - Function

---

## ✅ Progress

- [x] String Dasar
- [x] Input String
- [x] strlen()
- [x] strcpy()
- [x] strcmp()
- [x] strcat()

🎉 Selamat!