//https://www.urionlinejudge.com.br/judge/pt/problems/view/1095
//@author LucasIFNMG


#include <stdio.h>
 
int main() {
 
    int i = 1,j = 60;

        for(i = 1, j = 60; j >=0; j-=5, i+=3)
            printf("I=%d J=%d\n",i,j);
        
    return 0;
}