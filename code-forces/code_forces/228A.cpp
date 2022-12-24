#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{   int s[4], i, j, aux, ant, count, total = 0;

    for (i = 0; i < 4; i++)
        scanf("%d", &s[i]);

    for (i = 0; i < 3; i++)
    {   for (j = i+1; j < 4; j++)
        {   if (s[j] < s[i])
            {   aux = s[j];
                s[j] = s[i];
                s[i] = aux;
            }
        }
    }

    ant = s[0];
    count = 0;
    for (i = 0; i < 4; i++)
    {   if (s[i] == ant)
            count++;
        else
        {   if (count > 1)
                total += count - 1;
            
            count = 1;
            ant = s[i];
        }
    }

    if (count > 1)
        total += count - 1;

    printf("%d", total);

    return 0;
}