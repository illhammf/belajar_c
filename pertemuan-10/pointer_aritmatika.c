#include <stdio.h>

// Untuk mengakses data array menggunakan pointer, kita dapat menggunakan aritmatika pointer. Dalam contoh ini, kita memiliki sebuah array angka dan sebuah pointer yang menunjuk ke elemen pertama dari array tersebut. Dengan menggunakan aritmatika pointer, kita dapat mengakses setiap elemen dalam array dengan menambahkan indeks ke pointer.
int main()
{
    int angka[] = {10, 20, 30, 40, 50};

    int *pointer = angka;

    for (int i = 0; i < 5; i++)
    {
        printf("Data ke-%d : %d\n", i + 1, *(pointer + i));
    }

    return 0;
}