#include <stdio.h>

int main()
{

    int osszeg = 0;
    int bekeres;
    do
    {
        printf("Irjon be egy pozitiv egesz szamot: ");
        scanf("%d", &bekeres);
        if (bekeres != 0){
            osszeg += bekeres;
        }
    }while(bekeres != 0);
    {
        printf("Egesz szam: (vege: 0): %d\n", bekeres);
    }

    printf("Elemek osszege: %d\n", osszeg);

    return 0;
}