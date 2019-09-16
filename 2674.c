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
    //84321 , 17971
    //Pensar Algoritmo que verifique se é divisível por 10, 100, 1000 e 10000
    int dezMilhar = n / 10000; // 8
    int milhar = (n / 1000)%10; //(84%10) = 4
    int centena =  (n%1000 )/100;  //                                            //84321/1000 = 84, R = 321 / 100 = 3  
    int dezena = (n%10000)%100/10;  //84321/10000 = 8, R = 4321 / 1000 = 4, R = 321 / 100 = 3, R = 21 / 10 = 2
    int unidade = (n%10000)%100%10%10;   //84321/10000 = 8, R = 4321 / 1000 = 4, R = 321 / 100 = 3, R = 21 / 10 = 2, R = 1

    if (dezMilhar != 0)
        if(verificaPrimo(dezMilhar) == 0)   
            return 0;
    
        if(verificaPrimo(milhar) == 0)   
            return 0;

        if(verificaPrimo(centena) == 0)   
            return 0;

        if(verificaPrimo(dezena) == 0)   
            return 0;
    
        if(verificaPrimo(unidade) == 0)   
            return 0;
        
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
        if(verificaSuperPrimo(N) == 1)
        {
            printf("Super\n");
            continue;
        }
        //Caso 2
        if(verificaPrimo(N) == 0)
            printf("Nada\n");

        //Caso 3
        if(verificaPrimo(N) == 1)
            printf("Primo\n");

        cont++;
    }while(cont < N);
}