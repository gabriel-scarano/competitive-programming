#include <stdio.h>

int main ()
{   int i, t, n, m;

    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {   scanf("%d %d", &n, &m);

        printf("%d\n", n*m);
    }

    return 0;
}
