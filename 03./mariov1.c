#include <stdio.h>

int main()
{
    int n;
    printf("Irja be milyen magas legyen");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i)
    {
        //pontosan i darab teglat kell kitenni
        for (int j = 1; j <= i; ++j)
        {
            printf("#");
        }
        printf("\n"); 
    }
    


    return 0;
}