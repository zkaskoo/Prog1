#include <stdio.h>

int main()
{

    int osszeg = 0;
    int bekeres;
    do
    {
        printf("Irjon be egy pozitiv egesz szamot: ");
        scanf("%d", &bekeres);
        if (bekeres != 0 && bekeres > 0){
            ++osszeg;
        }
    }while(bekeres != 0);
    {
        printf("Egesz szam: (vege: 0): %d\n", bekeres);
    }

    printf("Pozitiv elemek szama: %d\n", osszeg);

    return 0;
}