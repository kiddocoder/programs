#include <stdio.h>

int main(){
      float HT, NBR_AR, TVA, p_TTC;
      printf("Entrer le prix HT : ");
      scanf("%f", &HT);
      printf("Entrer le nombre d'article : ");
      scanf("%f", &NBR_AR);
      printf("Entrer la TVA : ");
      scanf("%f", &TVA);
      // calcul du prix TTC
      p_TTC = HT * NBR_AR * (1 + TVA / 100);
      // affichage du prix TTC (prix total avec TVA collecte )
      printf("Le prix TTC est : %.2f", p_TTC);

      return 0; 
}