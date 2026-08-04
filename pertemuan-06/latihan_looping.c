#include <stdio.h>

int main()
{
    int i;

    printf("=== BILANGAN GENAP ===\n\n");

    for (i = 2; i <= 20; i += 2) // Untuk menampilkan bilangan genap dari 2 hingga 20, kita dapat menggunakan perulangan for dengan increment sebesar 2.
    {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}