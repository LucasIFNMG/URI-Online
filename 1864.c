//https://www.urionlinejudge.com.br/judge/pt/problems/view/1864
//@author LucasIFNMG

#include <stdio.h>

int main()
{
    char frase[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";

    int N;
    scanf(" %d",&N);

    for(int i=0;i<N;i++)
        printf("%c",frase[i]);
    printf("\n");

}