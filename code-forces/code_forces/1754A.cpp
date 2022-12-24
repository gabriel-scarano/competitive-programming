#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{   int t, n, i, j, count_q, count_a;
    char c;

    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {   scanf("%d", &n);

        count_a = 0;
        count_q = 0;
        for (j = 0; j < n; j++)
        {   scanf(" %c", &c);

            if (c == 'Q')
                count_q++;
            else if (c == 'A')
                count_a++;
        }
        
        if (count_a < count_q)
            printf("No\n");
        else
            printf("Yes\n");
    }

    return 0;
}