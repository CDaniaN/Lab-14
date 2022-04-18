/*
Dania Nasereddin
4-5-21
This program reads user input for base and height of a triangle
and then outputs the area of the triangle
*/
#include <stdio.h>

int main()
{
  int base, height, area; //variables

  printf("Base of a triangle: "); //user input for base length
  scanf("%d", &base);
  printf("Height of a triangle "); //user input for height lenght
  scanf("%d\n", &height);

  area = (base * height)/2; //calculating area
  printf("Area of the triangle: %d\n", area);

  return 0;
}
