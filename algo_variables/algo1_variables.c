// 1. Échange de valeurs entre deux variables

// Écris un programme qui prend deux nombres entiers en entrée, puis échange leurs valeurs sans utiliser de variable temporaire.

#include <stdio.h>

int main(){
    int a = 54;
    int b = 98;

    int defaulta = a;
    int defaultb = b;

    b = b + a;
    a = b - a; 
    b = b - a;

    printf("A = %d, default value : %d\n", a, defaulta);
    printf("B = %d, default value : %d\n", b, defaultb);
    return 0;
}