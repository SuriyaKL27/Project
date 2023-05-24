#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void) {

    srand(time(0));
    int secretAmount = rand() % 100 + 1;

    printf("Bienvenue dans le jeu Trouver le Juste Prix !\n");
    printf("Un montant entre 1 et 100 euros a été choisi. A vous de le deviner.\n");

    int playerGuess;
    int attempts = 0;
    bool hasWon = false;

    while (!hasWon) {
        printf("Entrez votre estimation : ");
        scanf("%d", &playerGuess);
        
        attempts++;

        if (playerGuess == secretAmount) {
            printf("Félicitations ! Vous avez trouvé le Juste Prix .\n", attempts);
            hasWon = true;
        } else if (playerGuess < secretAmount) {
            printf("C'est + .\n");
        } else {
            printf("C'est - .\n");
        }
    }

    return 0;
}
