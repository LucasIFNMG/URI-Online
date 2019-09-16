//https://www.urionlinejudge.com.br/judge/pt/problems/view/1875
//@author LucasIFNMG

#include <stdio.h>

//Gol HORÁRIO (1) = 2 pts ,  ANTI-HORÁRIO (0) = 1pt

int main()
{
    int C, cont = 0 , P;
    char M, S;

    int red = 0, green = 0, blue = 0;

    scanf(" %d\n",&C);

    do
    {
        cont++;
        red = 0;
        green = 0;
        blue = 0;
        scanf(" %d\n",&P);

        if(P == 0)
        {
            printf("trempate\n");
            continue;
        }
        if(P!=0)
        {
            for(int i = 0; i < P; i++)
            {
                scanf(" %c %c",&M, &S); 

                if( M == 'R')
                {
                    if( S == 'G')
                        red+=2;
                    if( S == 'B')
                        red++;
                }

                if( M == 'G')
                {
                    if( S == 'B')
                        green+=2;
                    if( S == 'R')
                        green++;
                }

                if( M == 'B')
                {
                    if( S == 'R')
                        blue+=2;
                    if( S == 'G')
                        blue++;
                }

            }
        }
        if ( red == green && green == blue)
        {
            printf("trempate\n");
            continue;
        }

        if( ( red == green && green > blue) || ( green == blue && blue > red) || (red == blue && red > green))
        {
            printf("empate\n");
            continue;
        }

        if( red > green && red > blue)
        {
            printf("red\n");
            continue;
        }
        
        if( green > red && green > blue)
        {
            printf("green\n");
            continue;
        }

        if( blue > green && blue > red)
        {
            printf("blue\n");
            continue;
        }

    } while (cont < C);
    

}