//https://www.urionlinejudge.com.br/judge/pt/problems/view/1589
//@author LucasIFNMG

#include <stdio.h>

int main()
{
    int raio1, raio2, raioCond;

    //T<=10000
    int T, cont = 0;

    scanf(" %d",&T);
    do
    {
        scanf(" %d%d",&raio1, &raio2);
        raioCond = raio1+raio2;
        printf("%d\n", raioCond);
        cont++;
    } while (cont < T);
    


}