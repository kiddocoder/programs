#include <stdio.h>
#include <stdlib.h>
int main(int argc, char*argv[]){
  int A=20, B=5, C=-10, D=2, X=12 ,Y=15;

//a)(5*X) +2*((3*B)+4)
 // printf("%d",(5*X) +2*((3*B)+4)); // 98

//b) (5*(X+2)*3)*(B+4)
//printf("%d",(5*(X+2)*3)*(B+4)); // 1890

//c) A == (B=5)
//printf("%d",A == (B=5)); // 0

//d) A += (X+5)
//printf("%d",A += (X+5)); // 37

//e) A != (C *= (-D))
//printf("%d",A != (C *= (-D))); // 0
/*
f) (6) A *= C+(X-D)
g) (7) A %= D++
h) (8) A %= ++D
i) (9) (X++)*(A+C)
j) (10) A = X*(B<C)+Y*!(B<C)
*/
// k) (11) !(X-D+C)||D
//printf("%d",!(X-D+C)||D); // 1
//l) (12) A&&B||!0&&C&&!D
//printf("%d",A&&B||!0&&C&&!D); // 1

return 0 ;

}
