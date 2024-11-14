// Exercice 2 : Vérifier si un nombre est premier

// Écris un programme qui demande à l’utilisateur de saisir un nombre entier positif. Le programme doit vérifier si ce nombre est premier et afficher un message en conséquence.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 9, i;

    if (a < 2){
        printf("%d is not a prime number", a);
        exit(1);
    }

    for (i = 2; i < a; i++) {
        if (a % i == 0) {
            printf("%d is not a prime number\n", a);
            exit(1);
        }
    }

    printf("%d is a prime number", a);

    return 0;
}