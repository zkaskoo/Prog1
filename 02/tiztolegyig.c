#include <stdio.h>

int main()
{

    for (int i = 10; i > 0; --i)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
