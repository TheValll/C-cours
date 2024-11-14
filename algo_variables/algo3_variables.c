// 3. Calcul de la moyenne

// Écris un programme qui calcule la moyenne de plusieurs nombres entrés par l'utilisateur.


#include <stdio.h>

int main(){
    int a = 12, b = 4, c = 20;
    float average = (a + b + c)/3;

    printf("La moyenbe de %d, %d et %d est %.2f", a, b, c, average);
    return 0;
}