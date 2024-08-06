#include <stdio.h>
 // struct of persons infos details
 struct ofpers {
      int age,
      char name[20];
      float salary;
      char description;
      char adress;
 }

int main(){

      // use my struct
      struct ofpers p1;
      p1.age = 25;
      strcpy(p1.name, "John");
      p1.salary = 10000;
      p1.description = 'M';
      p1.adress = 'N';

      //print information
      printf("%d\n", p1.age);
      printf("%s\n", p1.name);
      printf("%f\n", p1.salary);
      printf("%c\n", p1.description);
      printf("%c\n", p1.adress);
      return 0;
}