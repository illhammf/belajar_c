#include <stdio.h>

void tampilkanNama(char nama[])
{
    printf("Halo, %s!\n", nama);
}

int main()
{
    tampilkanNama("Ilham");
    tampilkanNama("Budi");
    tampilkanNama("Andi");

    return 0;
}