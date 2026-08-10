#include <stdio.h>

// Program ini menggunakan pointer untuk mengakses elemen-elemen dari array angka. Pointer diinisialisasi dengan alamat dari array angka, dan kemudian digunakan dalam loop untuk mencetak setiap elemen dari array tersebut.
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