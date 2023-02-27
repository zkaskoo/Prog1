#include <stdio.h>

int main()
{
    int bekeres;

    printf("Adjon meg egy tetszoleges szamot: ");
    scanf("%d", &bekeres);

    for (int i = 0; i <= bekeres; i += 4)
    {
        if (i % 4 == 0 && i != 0){
            printf("%d\n", i);
        }
    }

    return 0;
}