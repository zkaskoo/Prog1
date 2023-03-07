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
int main()
{
    int a;
    int b;

    printf("adja meg a magassagot");
    scanf("%d", &a);
    printf("adja meg a szelesseget");
    scanf("%d", &b);

    printf("%d", terulet(a,b));

    return 0;
}       