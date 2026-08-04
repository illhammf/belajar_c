#include <stdio.h>

int main()
{
    int i = 1;

    printf("=== PERULANGAN DO WHILE ===\n\n");

    do
    {
        printf("Perulangan ke-%d\n", i);
        i++;
    }
    while (i <= 10);

    return 0;
}