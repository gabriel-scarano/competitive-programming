#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{   int n, a[100], i, j, aux, max, min, ind_maior, ind_menor, count = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    min = a[0];
    max = a[0];
    ind_maior = 0;
    ind_menor = 0;

    for (i = 0; i < n; i++)
    {   if (a[i] > max)
        {   max = a[i];
            ind_maior = i;
        }

        if (a[i] <= min)
        {   min = a[i];
            ind_menor = i;
        }
    }

    count += ind_maior;
    
    if (ind_maior > ind_menor)
        count += n-2-ind_menor;
    else
        count += n-1-ind_menor;

    printf("%d", count);

    return 0;
}