// Exercice 5 : Deviner le nombre

// Écris un programme qui génère un nombre aléatoire entre 1 et 100 (utilise rand() et srand(time(NULL)) pour initialiser le générateur de nombres aléatoires). Le programme doit demander à l'utilisateur de deviner ce nombre. Il doit indiquer si la réponse est trop haute ou trop basse jusqu’à ce que l’utilisateur trouve le bon nombre.


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int secret = rand() % 101, user = 41, i = 0;
    bool win = false;

    while(!win || i < 3){
        if(user > secret){
            printf("%d is too high\n", user);
        }else if(user < secret){
            printf("%d is too low\n", user);
        }else{
            printf("GGS!\n");
            win = true;
        }

        i++;
    }
    
    return 0;
}