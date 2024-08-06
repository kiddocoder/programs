#include <stdio.h>
#include <stdlib.h>

int main() {
    // Déclaration des variables
    int n, est_premier = 0; // 0 pour faux, 1 pour vrai
    int est_entier = 1; // 1 pour vrai (par défaut)

    // Demande à l'utilisateur d'entrer un nombre entier
    printf("Entrer un nombre entier : ");
    
    // Vérification de la saisie de l'utilisateur
    if (scanf("%d", &n) != 1) {
        printf("Erreur : Veuillez entrer un nombre entier.\n");
        est_entier = 0; // Définir à 0 si l'entrée n'est pas un entier
    } else {
        // Vérification si le nombre est premier
        if (n <= 1) {
            est_premier = 0; // Définir à 0 si le nombre n'est pas premier
        } else {
            for (int i = 2; i <= n / 2; i++) {
                if (n % i == 0) {
                    est_premier = 0; // Définir à 0 si le nombre n'est pas premier
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