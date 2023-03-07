#include <stdio.h>

int my_abs(int szam)
{
    if (szam < 0)
    {
        return szam * (-1);
        // reutrn -szam; 1 operandusu operator 
    }
    else
    {
        return szam;
    }
}
int main()
{
    int n = -9;

    printf("%d --> %d\n", n, my_abs(n));

    return 0;
}