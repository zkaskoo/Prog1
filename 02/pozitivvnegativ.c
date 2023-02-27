#include <stdio.h>

int main()
{

    int a;
    printf("Irjon be egy szamot: ");
    scanf("%d", &a);

    if (a < 0)
    {
        printf("negativ\n");
    }
    else if (a > 0)
    {
        printf("pozitiv\n");
    }
    else
    {
        printf("nulla\n");
    }

    return 0;
}