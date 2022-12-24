#include <stdio.h>

int main ()
{   int i, j, k, t, n[3], aux;

    scanf("%d", &t);
    
    for (i = 0; i < t; i++)
    {   scanf("%d %d %d", &n[0], &n[1], &n[2]);

        for (j = 0; j < 2; j++)
        {   for (k = j + 1; k < 3; k++)
            {   if (n[j] > n[k])
                {   aux = n[j];
                    n[j] = n[k];
                    n[k] = aux;
                }
            }
        }

        printf("%d\n", n[1]);
    }

    return 0;
}
