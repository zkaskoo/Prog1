#include <stdio.h>

int get_int()
{
    int n;

    printf("adjon meg egy szamot");
    scanf("%d", &n);
    
    return n;
}


int main()
{
    int n = get_int();
    
    printf("%d", n);

    return 0;
}