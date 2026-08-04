#include <stdio.h>

int main()
{
    int baris, kolom;

    printf("=== NESTED LOOP ===\n\n");

    for (baris = 1; baris <= 5; baris++)
    {
        for (kolom = 1; kolom <= 5; kolom++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}