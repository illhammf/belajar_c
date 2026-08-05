#include <stdio.h>

int main()
{
    int nilai[5] = {80, 85, 90, 75, 88};

    printf("=== ARRAY DASAR ===\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("nilai[%d] = %d\n", i, nilai[i]);
    }

    return 0;
}