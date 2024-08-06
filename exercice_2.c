#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argv[]){
      char c;
   // parcourir les lettres de [a,b]
   for ( c = 'a'; c <= 'z'; c++)
   {
     printf("caractere : %c , ASCII = %d \t HEXA = %x \n",c,c,c);
   }
    // parcourir les lettres de [A,Z]
   for ( c = 'A'; c <= 'Z'; c++)
   {
     printf("caractere : %c , ASCII = %d \t HEXA = %x \n",c,c,c);
   }
    // parcourir les chiffres de [0,9]
   for ( c = '0'; c <= '9'; c++)
   {
     printf("caractere :  %c , ASCII = %d \t HEXA = %x \n",c,c,c);
   }

 return 0;
}
