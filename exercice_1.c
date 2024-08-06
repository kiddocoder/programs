#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argv[]){
      int a,b;// deux entiers
      float x,y ; // deux reels

      printf("Entrer l entier a :");
      scanf("%d",&a);
      printf("Entrer entier b :");
      scanf("%d",&b);
      printf("%d * %d = %d \n",a,b,a*b);



      printf("Entrer le reel x :");
      scanf("%f",&x);

      printf("Entrer le reel y :");
      scanf("%f",&y);
      printf("%f * %f = %.2f\n",x,y,x*y);

      return 0;
}
