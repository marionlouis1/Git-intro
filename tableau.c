#include <stdio.h>

int main ()
{
    int t[50], n=0, i;

    for (i = 0; i < 100; i++) 
    {
        if i%2 == 0 {
            t[n] = i ; 
            n = n+1;
        }
    }

    for (i = 0 ; i < 50 ; i++)
        {
            printf("%d\n", tableau[i]);
        }

        return 0;
    }
}