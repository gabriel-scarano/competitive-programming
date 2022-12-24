#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{   int n, i, e, s, pass = 0, max = -1;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {   scanf("%d %d", &s, &e);

        pass -= s;
        pass += e;

        if (pass > max)
            max = pass;
    }

    printf("%d", max);

    return 0;
}