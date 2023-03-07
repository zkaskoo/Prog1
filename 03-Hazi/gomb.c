#include <stdio.h>
#include <math.h>

double get_double()
{
    double n;

    while(1)
    {

        scanf("%lf", &n);
        if (n > 0){
            break;
        }
        else{
            printf("Adja meg a szamot");
        }
    }
    return n;
}

double felszin(double sugar)
{
    return 4 * (sugar * sugar) * M_PI;
}

double terfogat(double sugar)
{
    return (4 * (sugar * sugar * sugar) * M_PI) / 3;  
}

int main()
{

    printf("Adja meg a gomb sugarat: ");  
    double n = get_double();
    
    printf("a gomb felszine %.2lf\n", felszin(n));
    printf("A gomb terfogata %.2lf\n", terfogat(n));


    return 0;
}