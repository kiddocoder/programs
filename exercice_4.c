#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    int a, b, c, pg;
    printf("Entrer trois entiers : \n");
    scanf("%d %d %d", &a, &b, &c);

    /*pg = (a > b && a > c) ? a : (b > a && b > c) ? b : c; Tu peut le faire en une ligne ou */
    if(a>b && a > c){
        pg = a;
    }else if(b > a && b > c){
        pg = b;
    }else{
        pg = c;
    }

    printf("Le plus grand de %d, %d, %d est : %d\n", a, b, c, pg);
    return 0;
}
