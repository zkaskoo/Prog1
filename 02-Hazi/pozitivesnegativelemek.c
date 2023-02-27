#include <stdio.h>

int main()
{

    int pozitiv = 0;
    int negativ = 0;
    int bekeres;
    do
    {
        printf("Irjon be egy pozitiv egesz szamot: ");
        scanf("%d", &bekeres);
        if (bekeres != 0 && bekeres > 0){
            ++pozitiv;   
        }
        if (bekeres != 0 && bekeres < 0){
            ++negativ;
        }
    }while(bekeres != 0);
    {
        printf("Egesz szam: (vege: 0): %d\n", bekeres);
    }

    printf("Pozitiv elemek szama: %d\n", pozitiv);
    printf("Negativ elemek szama: %d\n", negativ);

    return 0;
}