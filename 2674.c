//https://www.urionlinejudge.com.br/judge/pt/problems/view/2674
//@author LucasIFNMG

#include <stdio.h>

int verificaPrimo(int n)
{
    if(n == 0 || n == 1)
        return 0;

    for(int i = 2; i< n/2 ; i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1; //Primo

}

int verificaSuperPrimo(int n)
{
    int div = 10000, div2 = 10000;

    for(int i = 0; i<5 ; i++ , div/= 10, div2 *=10)
    {
        printf("div = %d div2 = %d\n", div,div2);
        n = n/div;

        while (div2 != 1)
        {
            n = n%div2;
            div2 /= 10;
        }

        if ( verificaPrimo(n) == 0 )
            return 0;
    }

    return 1;
}

int main()
{
    int N, vezes = 5;
    int cont = 0;
    do
    {
        scanf(" %d",&N);

        //Caso 1
        if(verificaPrimo(N) == 0)
            {
                printf("Nada\n");
                continue;
            }

        //Caso 2
        if(verificaPrimo(N) == 1)
            if(verificaSuperPrimo(N) == 1)
            {
                printf("Super\n");
                continue;
            }

        //Caso 3
        if(verificaPrimo(N) == 1)
        {
            printf("Primo\n");
            continue;
        }
        cont++;
    }while(cont < N);
}
