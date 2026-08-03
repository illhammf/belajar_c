#include <stdio.h>

int main()
{
    float nilai;

    printf("=== PENENTUAN GRADE ===\n\n");

    printf("Masukkan nilai : ");
    scanf("%f", &nilai);

    if (nilai >= 90)
    {
        printf("\nGrade : A\n");
    }
    else if (nilai >= 80)
    {
        printf("\nGrade : B\n");
    }
    else if (nilai >= 70)
    {
        printf("\nGrade : C\n");
    }
    else if (nilai >= 60)
    {
        printf("\nGrade : D\n");
    }
    else
    {
        printf("\nGrade : E\n");
    }

    return 0;
}