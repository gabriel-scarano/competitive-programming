#include<stdio.h>

int max (int a, int b)
{   if (a > b)
        return a;
    else
        return b;
}

int main() {
	int i, n, a, b;
	    
	scanf("%d", &n);    
	    
	for (i = 0; i < n; i++)
	{   scanf("%d %d", &a, &b);
	
	    printf("%d\n", max(a, b));
	}
	
	
	return 0;
}