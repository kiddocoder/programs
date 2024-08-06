#include <stdio.h>
#include <stdlib.h>
#define L 50 // nombre de ligne maximale
#define N 50 // nombre de colonnes maximale
int main(int argc, char*argv[]){
    int tab[L][N]; // tu peux faire directement int tab[50][50];
    int T,C; // nombre de ligne et de colonnes
    int i,j,sum = 0;
     printf("Entrer le nombre de ligne : ");
     scanf("%d",&T);
     printf("Entrer le nombre de colonnes:");
     scanf("%d",&C);

     // engregistrer les donnees dans le tableau
     for(i=0 ; i< T; i++){ // compteur des lignes
        for(j=0 ;j<C ; j++){ // compteur des colonnes

            printf("tab[%d][%d] : ",i,j);
            scanf("%d",&tab[i][j]);
            sum += tab[i][j]; // calculer la somme
        }
     }

     // Afficher le tableau
     printf("\n Affichage du tableau \n\n");
     for(i=0;i<T;i++){
        for(j=0;j<C;j++){
            printf("tab[%d][%d] = %d\n",i,j,tab[i][j]);
        }
     }

     //  affcher la somme de ces elements
     printf("La somme des elements est : %d \n",sum);
     return 0 ;
}
