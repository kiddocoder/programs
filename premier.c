#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    // Déclaration des variables
    int n;
    bool est_premier = true; // Booléen pour vérifier si un nombre est premier
    bool est_entier = true; // Booléen pour vérifier si l'entrée est un entier

    // Demande à l'utilisateur d'entrer un nombre entier
    printf("Entrer un nombre entier : ");
    
    // Vérification de la saisie de l'utilisateur
    if (scanf("%d", &n) != 1) {
        printf("Erreur : Veuillez entrer un nombre entier.\n");
        est_entier = false;
    } else {
        // Vérification si le nombre est premier
        if (n <= 1) {
            est_premier = false;
        } else {
            for (int i = 2; i <= n / 2; i++) {
                if (n % i == 0) {
                    est_premier = false;
                    break;
                }
            }
        }

        // Affichage du résultat
        if (est_entier) {
            if (est_premier) {
                printf("%d est un nombre premier.\n", n);
            } else {
                printf("%d n'est pas un nombre premier.\n", n);
            }
        }
    }

    return 0;
}