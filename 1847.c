//https://www.urionlinejudge.com.br/judge/pt/problems/view/1847
//@author LucasIFNMG

#include <stdio.h>

int main()
{
    int A, B, C;

    scanf(" %d %d %d",&A, &B, &C);

    if( ( A>B ) && ( B<C || B == C) )
        printf(":)\n");

    if( ( A<B ) && ( ( B > C || B == C )) )
        printf(":(\n");

    if( ( A<B ) && ( B<C ) && ( (C-B) < (B-A) ) )
        printf(":(\n");
    
    if( ( A<B ) && ( B<C ) && ( (C-B) >= (B-A) ) )
        printf(":)\n");
    
    if( ( A>B ) && ( B>C ) && ( (B-C) < (A-B) ) )
        printf(":)\n");

    if( ( A>B ) && ( B>C ) && ( (B-C) >= (A-B) ) )
        printf(":(\n");

    if( A==B )
    {
        if(B < C)
            printf(":)\n");
        else
            printf(":(\n");
    }
        
}

    
    
    
    