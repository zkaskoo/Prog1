#include <stdio.h>

int main()
{
    int n;

    do
    {
        printf("Irjon be egy pozitiv egesz szamot: ");
        scanf("%d", &n);
    }while (n <= 0);
    {
        if (n % 2 == 0 && n > 0)
        {
            n -= 1;
        }
        while (n % 2 == 1 && n > 0)
        {
            printf("%d\n", n);
            n -= 2;
        }
    }
    
    return 0;
}