
#include <stdio.h>
int main() {
    int u_0 = 2; // u_0 de la suite u_n
    int u_n = u_0; // valeur initiale de u_n
    int v_n = u_n - 3; // v_n en fonction de u_n
    int u_next, v_next; // valeurs suivantes de u_n et v_n
    float q; // raison de la suite
    
    printf("u_0 = %d\n", u_0);
    printf("v_0 = %d\n", v_n);
    printf("==============\n");
    u_next = 2 * u_n - 3; // calcul de u_(n+1)
    v_next = u_next - 3; // calcul de v_(n+1)

    q = (float) v_next / v_n; // calcul de la raison q

    printf("u_1 = %d\n", u_next);
    printf("v_1 = %d\n", v_next);
    printf("==============\n");
    printf("|| q = %.2f ||\n", q);
    printf("==============\n");

    if (v_next == q * v_n) {
        printf("La suite v_n est une suite géométrique de raison %.2f.\n", q);// je fixe deux chiffre apres la virgule
    } else {
        printf("La suite n'est pas une suite géométrique.\n");
    }
    return 0;
}

