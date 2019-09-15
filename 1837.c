//https://www.urionlinejudge.com.br/judge/pt/problems/view/1837
//@author LucasIFNMG

#include <stdio.h>

int main()
{
    int a,b;
    int q,r;
    /* Casos Particulares: a < 0 , r < 0

    -8/3 = -2.  -2*3 = -6 , resto -2. Mas resto deve ser >=0. Então, DECREMENTAR o q  para aumentar o r
    -8/3 = -3.  -3*3 = 9 , resto 1 OK

    -7/-3 = 2.  2*-3 = -6, resto -1.  Mas resto deve ser >=0. Então, INCREMENTAR o q  para aumentar o r
    -7/-3 = 3.  3*-3 = -9, resto 2 OK
    */

    scanf(" %d %d",&a,&b);

    q = a/b;
    r = a%b;

    if(a < 0)
    {
        if(r < 0)
        {
            if( (q < 0) || (q == 0 && b > 0) ) 
                q--;
            if( (q > 0) || (q == 0 && b < 0) ) 
                q++;
        }
        
    }
    r = a - (q*b);
    printf("%d %d\n",q,r);

}