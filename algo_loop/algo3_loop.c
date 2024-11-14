// Exercice 3 : Calculer la factorielle d'un nombre

// Écris un programme qui demande à l’utilisateur de saisir un nombre entier positif et qui calcule la factorielle de ce nombre.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 10, result = 1, i;

    if (a < 0){
        printf("%d is not positif", a);
        exit(1);
    }

    for (i = 1; i < a + 1; i++)
    {
        result *= i;
    }
    
    printf("%d", result);
    return 0;
}