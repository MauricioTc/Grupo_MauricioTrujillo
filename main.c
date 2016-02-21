#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 1;

    for (x=1;x<=5;x++)
    {
        printf("Numero %d\n", x);
    }

    x=x+5;

    printf("Numero %d", x);


    return 0;
}
