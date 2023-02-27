#include <stdio.h>

int main()
{
    int szam;
    
    printf("Adjon meg egy pozitiv egesz szamot: ");
    scanf("%d", &szam);

    while (szam <= 0)
    {
        printf("Adjon meg egy pozitiv egesz szamot: ");
        scanf("%d", &szam);
    }

    printf("A pozitiv egesz: %d\n", szam);

    return 0;
}