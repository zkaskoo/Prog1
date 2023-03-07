#include <stdio.h>


int terulet(int magassag, int szelesseg)
{
    if (magassag > 0 && szelesseg > 0)
    {
        return magassag * szelesseg;
    }
    return magassag;
    return szelesseg;
}

int kerulet(int magassag, int szelesseg)
{
    if (magassag > 0 && szelesseg > 0)
    {
        return 2 * (magassag + szelesseg);
    }
    return magassag;
    return szelesseg;
}
int main()
{
    int a;
    int b;

    do
    {
        printf("adja meg a magassagot: ");
        scanf("%d", &a);
    }
    while(a < 0);

    do
    {
        printf("adja meg a szelesseget: ");
        scanf("%d", &b);
    }
    while(b < 0);

    printf("A teglalap terulete: %d\n", terulet(a,b));
    printf("A teglalap kerulete: %d\n", kerulet(a,b));

    return 0;
}       