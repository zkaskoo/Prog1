#include <stdio.h>

const int N = 1000


int main()
{
    
    int c = 0;

    for (int i = 1; i < N; ++i)
    {
        if ((i % 3 == 0) || (i % 5 == 0))
        {
            c += i;
        }
    }
    printf("%d\n", c);



    return 0;
}