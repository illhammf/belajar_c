#include <stdio.h>

void tampilkanMenu()
{
    printf("===== MENU =====\n");
    printf("1. Tambah\n");
    printf("2. Kurang\n");
    printf("3. Keluar\n");
}

void tampilkanGaris()
{
    printf("================\n");
}

int main()
{
    tampilkanGaris();
    tampilkanMenu();
    tampilkanGaris();

    return 0;
}