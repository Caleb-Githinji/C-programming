//C Variables
#include <stdio.h>

int main(){
  //declaration and initialisation
  char a;
  char name[]="Caleb" ;
  int age;
  float area;
  double salary;
  
  printf ("Enter a character:");
  scanf ("%c", &a);
  printf ("the character is %c \n", a);
  
  printf ("Enter your name:");
  scanf ("%s", &name);
  printf ("the string is %s \n", name);
  
  printf ("Enter your age:");
  scanf ("%d", &age);
  printf ("the integer is %d \n", age);
  
  printf ("Enter the area:");
  scanf ("%f", &area);
  printf ("the float is %f \n", area);
  
  printf ("Enter the salary:");
  scanf ("%ld", &salary);
  printf ("the double is %ld \n", salary);
  
    return 0;
}
