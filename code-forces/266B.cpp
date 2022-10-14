#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{   int n, t, i;
    char fila[51];

    scanf("%d %d", &n, &t);

    scanf("%s", fila);


    for (int j = 0; j < t; j++)
    {   for (i = n; i >= 1; i--)
        {   if (fila[i] == 'G' && fila[i-1] == 'B')
            {   fila[i] = 'B';
                fila[i-1] = 'G';
                i--;
            }
        }
    }

    printf("%s", fila);

    return 0;
}