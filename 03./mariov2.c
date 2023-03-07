#include <stdio.h>

int main()
{
    int n;
    printf("Irja be milyen magas legyen");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i)
    {
        int szokozok = n - i;
        int teglak = i;
        
        for (int j = 0; j < szokozok; j++)
        {
            printf(" ");

        }
        for (int l = 0; l < teglak; ++l)
        {
            printf("#");
            
        } 
        for (int h = 1; h <= i; ++h)
        {
            printf("#");
        }  
        printf("\n");     
    }
    
    return 0;
}