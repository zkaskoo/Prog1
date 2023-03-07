#include <stdio.h>

int get_pozitiv_int()
{
    int szam;

    while(1)
    {
        printf("Adj meg egy pozitiv erteket: ");
        scanf("%d", &szam);
        if (szam > 0){
            break;
        }
    }
    return szam;
}

int main()
{
    
    int n = get_pozitiv_int();
    
    printf("%d\n", n);

    return 0;
}

//teglalapos feladat fuggvennyel 