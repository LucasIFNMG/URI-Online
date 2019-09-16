//https://www.urionlinejudge.com.br/judge/pt/problems/view/1124
//@author LucasIFNMG

#include <stdio.h>

int main()
{
    int cont = 5;
    //L = Largura do Elevador, C = Comprimento, R1,R2 = Raios dos Cilindros 1 e 2
    //Raios "Horizontais" 2*R1 + 2*R2 <= Largura
    //Raios "Verticais" 2*R1 + 2*R2 <= Comprimento
    
    int L, C, R1, R2;
    int Dx1, Dx2, Dy1, Dy2;
    int i = 0;
    
    do
    {
        if (i == 4)
        {
            L = 0, C = 0, R1 = 0, R2 = 0;
            break;
        }
        scanf(" %d%d%d%d\n",&L, &C, &R1, &R2);
        i++;

        Dx1 = 2*R1, Dx2 = 2*R2;
        Dy1 = 2*R1, Dy2 = 2*R2;
        float diag = L*L + C*C;

        int maiorD;
        if(R1 >= R2)
            maiorD = R1;
        else
            maiorD = R2;
        

        if( ( L > Dx1+Dx2 ) && (C > maiorD ) )
        {
            printf("S");
            continue;
        }   

        if( ( C > Dy1+Dy2 ) && (L > maiorD ) )
        {
            printf("S");
            continue;
        }

        
        if (diag >= Dx1 + Dy1)
        {
            printf("S");
            continue;
        }

        if( ( L < Dx1+Dx2 ) || (C < maiorD ) )
        {
            printf("N");
            continue;
        }

        if( ( C < Dy1+Dy2 ) || (L < maiorD ) )
        {
            printf("N");
            continue;
        }
        

        
       
   
    } while (i < cont);
    printf("\n");
}