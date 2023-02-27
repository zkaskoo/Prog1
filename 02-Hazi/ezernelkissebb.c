#include <stdio.h>

const int N = 1000;

int main()
{

    int osszeg = 0;

    for (int i = 0; i < N; ++i)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            osszeg += i;
        }
    }
    printf("%d\n", osszeg);

    return 0;
}