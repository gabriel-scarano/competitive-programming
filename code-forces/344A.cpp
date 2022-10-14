#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{   int n, c, i, ant, count = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {   scanf("%d", &c);

        if (i == 0)
        {   ant = c;
        } else
        {   if (ant != c)
            {   count++;
                ant = c;
            }
        }
    }

    count++;

    printf("%d", count);

    return 0;
}