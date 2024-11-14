// Exercice 4 : Afficher un triangle d'étoiles

// Écris un programme qui demande à l’utilisateur de saisir un nombre entier positif NN. Le programme doit afficher un triangle d'étoiles de NN lignes, comme ceci pour N=5N=5 :


#include <stdio.h>

int main(){
    int a = 5, n, y;

    for (n = 0; n <= a; n++)
    {
       for (y = 0; y < n; y++)
       {
            printf("*");
       }
       printf("\n");
    }

    return 0;
}