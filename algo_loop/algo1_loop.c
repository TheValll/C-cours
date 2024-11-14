// Exercice 1 : Calculer la somme des nombres pairs

// Écris un programme qui demande à l’utilisateur de saisir un nombre entier positif NN. Le programme doit calculer et afficher la somme de tous les nombres pairs de 1 à NN.

#include <stdio.h>

int main(){
    int number = 12;
    int i, result = 0;

    for (i = 0; i < number; i++)
    {
        if (i % 2 == 0){
            result += i;
        }

        i++;
    }
    
    printf("%d", result);
    return 0;
}