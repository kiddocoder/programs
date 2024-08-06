#include <stdio.h>

int main() {
    int nbr, max = 0, min = 0;
    
    do {
        printf("Entre a nombre: ");
        scanf("%d", &nbr);

        if (nbr != 0) {
            if (nbr > max) {
                max = nbr;
            }
            if (nbr < min || min == 0) {
                min = nbr;
            }
        }
    } while (nbr != 0);

    printf("Le plus grand de la suite est : %d\n", max);
    printf("Le plus petit de la suite est : %d\n", min);

    return 0;
}