#include <iostream>
#include <stdio.h>
#include <cctype>
#include <string.h>

using namespace std;

int main ()
{   char S[101];
    int count_l = 0, count_u = 0, i, len;

    scanf("%s", S);

    len = strlen(S);

    for (i = 0; i < len; i++)
    {   if (S[i] >= 'a' && S[i] <= 'z')
            count_l++;
        else if (S[i] >= 'A' && S[i] <= 'Z')
            count_u++;
    }

    if (count_u > count_l)
    {   for (i = 0; i < len; i++)
            S[i] = toupper(S[i]);
    } else
    {   for (i = 0; i < len; i++)
            S[i] = tolower(S[i]);
    }

    printf("%s", S);

    return 0;
}