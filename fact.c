#include <stdio.h>

// Fonction pour calculer le factoriel d'un nombre
int factoriel(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factoriel(n - 1);
    }
}

int main() {
    int n = 10; // Nombre de chiffres possibles de 0 à 9
    int k = 4; // Nombre de chiffres à choisir pour le code
    int nombre_de_combinaisons;

    // Calcul du nombre de façons différentes de configurer le code
    nombre_de_combinaisons = factoriel(n) / (factoriel(k) * factoriel(n - k));

    printf("Le code de sécurité peut être configuré de %d façons différentes.\n", nombre_de_combinaisons);

    return 0;
}




