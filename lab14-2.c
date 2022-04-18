/*
Dania Nasereddin
4-5-21
This program has a preprocessor called DEBUG that will not ask for user input
 to calculate the area of the triangle but will instead run with the default values
*/
#include <stdio.h>
#define DEBUG //preprocessor

int main()
{
  int base, height, area; //variables
  //defining preprocessor (default variables)
  #if defined DEBUG
  base = 2;
  height = 3;
  #endif

  area = (base * height)/2; //calculates area
  printf("Area of the triangle: %d\n", area);

  return 0;
}
