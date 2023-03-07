#include <stdio.h>


int main()
{
    int magassag;
    printf("adja meg milyen magas legyen a gyemant:");
    scanf("%d", &magassag);
    if (magassag % 2 == 1 && magassag > 0)
    {
        int csillag = 1;
        int sorok = (magassag / 2) + 1;
        int szokoz = (magassag / 2) - 1;

        for (int i = 1; i <= sorok; ++i)
        {
            for (int j = 0; j <= szokoz; ++j){
                printf(" ");
            }

            for (int l = 1; l <= csillag; ++l){
                printf("*");
            }
            szokoz --;
            csillag += 2;
            printf("\n");
        }

        csillag = magassag - 2;
        sorok = magassag - 2;
        szokoz = 1;

        for (int i = 1; i <= sorok; ++i)
        {
            for (int j = 1; j <= szokoz; ++j){
                printf(" ");
            }
            ++szokoz;

            for (int l = 1; l <= csillag; ++l){
                printf("*");
            }
            csillag -= 2;

            printf("\n");
        }

    }
    return 0;
}