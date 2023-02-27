#include <stdio.h>

int main()
{
    int osszeg = 0;

    for (int i = 0; i <= 100; ++i)
    {
        osszeg += i;
    }

    printf("Egytol szazig a szamok osszege: %d\n", osszeg);

    return 0;
}