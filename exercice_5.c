#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char*argv[]){
   float xa,xb,ya,yb;
   double dist; // distance de deux points A et B du plan


   printf("Entres les coordonees de A : \n");
   printf("X:");
   scanf("%f",&xa);
   printf("Y:");
   scanf("%f",&ya);
  printf("===========================\n");
  printf("Entres les coordonees de A : \n");
   printf("X:");
   scanf("%f",&xb);
   printf("Y:");
   scanf("%f",&yb);

   dist = sqrt(pow(xa-xb,2)+pow(ya-yb,2));
   printf("La distance entre A et B est : %.2f",dist);
}
