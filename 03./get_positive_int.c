#include <stdio.h>

int get_pozitiv_int()
{
    int szam;
    do
    {
        printf("adjon meg egy pozitiv egesz szamot: ");
        scanf("%d", &szam);
    }
    while(szam <= 0);
    return szam;
}

int main()
{
    
    int n = get_pozitiv_int();
    
    printf("%d\n", n);

    return 0;
}