#include <stdio.h>
#include <math.h>

int get_radious()
{
    
    int szam;
    while(1)
    {
       
        scanf("%d", &szam);
        if (szam > 0){
            break;
        }
        else{
            printf("Adja meg a kor sugarat [cm]: ");
        }
    }
    return szam;
}

double terulet(double r)
{
    return  r * r * M_PI;
}

double kerulet(double r)
{
    return 2 * M_PI * r;
}

int main()
{
    printf("Add meg a kor sugarat [cm]: ");

    double kor_sugar = get_radious();
    double t = terulet(kor_sugar);
    double k = kerulet(kor_sugar);

    printf("Pi megkozelito erteke: %lf\n", M_PI);
    printf("A kor teruelte %.4lf cm2\n", t);
    printf("A kor kerulete %.4lf cm\n", k);

    return 0;
}