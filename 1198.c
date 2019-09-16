//https://www.urionlinejudge.com.br/judge/pt/problems/view/1198

#include <stdio.h>

int main () 
{ 
    long long int x, y;

    while (scanf(" %lld %lld", &x, &y) != EOF) 
    {
            if (x>y) 
                printf("%lld\n", x-y);
            else 
                printf("%lld\n", y-x);
    }

}