#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

bool verifica (bool *v, int);

int main ()
{   int k[4], d, i, count = 0;
    bool *v;

    scanf("%d %d %d %d %d", &k[0], &k[1], &k[2], &k[3], &d);

    v = new bool[d];

    for (i = 0; i < d; i++)
        v[i] = false;

    while (!verifica(v, d) && count < 4)
    {   for (i = 0; i < d; i += k[count])
            v[i] = true;
        
        count++;
    }

    if (verifica(v, d))
        printf("%d", d);
    else
    {   count = 0;
        for (i = 0; i < d; i++)
            if (v[i])
                count++;

        printf("%d", count);
    }



    return 0;
}

bool verifica (bool *v, int n)
{   int i;

    for (i = 0; i < n; i++)
        if (v[i] == false)
            return false;

    return true;
}