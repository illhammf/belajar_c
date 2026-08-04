#include <stdio.h>

int main()
{
    char grade;

    printf("=== CEK GRADE ===\n\n");

    printf("Masukkan Grade (A-E): ");
    scanf(" %c", &grade);

    switch (grade)
    {
        case 'A':
            printf("\nSangat Baik\n");
            break;

        case 'B':
            printf("\nBaik\n");
            break;

        case 'C':
            printf("\nCukup\n");
            break;

        case 'D':
            printf("\nKurang\n");
            break;

        case 'E':
            printf("\nSangat Kurang\n");
            break;

        default:
            printf("\nGrade tidak valid.\n");
    }

    return 0;
}