#include <stdio.h>

int main ()
{   int x, y;

    scanf("%d %d", &x, &y);

    if (y <= x)
        printf("NO");
    else
        printf("YES");

    return 0;
}
