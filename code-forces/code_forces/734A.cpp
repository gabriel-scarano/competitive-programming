#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{   int n, i, count_a = 0, count_d = 0;
    char c;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {   scanf(" %c", &c);

        if (c == 'A')
            count_a++;
        else
            count_d++;
    }

    if (count_a > count_d)
        printf("Anton");
    else if (count_a == count_d)
        printf("Friendship");
    else
        printf("Danik");

    return 0;
}