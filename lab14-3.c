/*
Dania Nasereddin
4-5-21
This program has a preprocessor called DEBUG that if set to 1, it will not ask for user input and
instead run with the default values. If DEBUG is set to 0 it should run by asking for user input.
*/
#include <stdio.h>
#define DEBUG 1 // preprocessor set to 1 or 0

int main()
{
  int base, height, area; //variables
  //if preprocessor set to 1 do default
  #if DEBUG == 1
  base = 2;
  height = 3;
  //if preprocessor set to 0 do user input
  #elif DEBUG == 0
  printf("Base of a triangle: ");
  scanf("%d", &base);
  printf("Height of a triangle: ");
  scanf("%d", &height);
  #endif

  area = (base * height)/2; //calculates area
  printf("Area of the triangle: %d\n", area);

  return 0;
}
