#include <stdio.h>

float areaOfCircle(float radius)
{
  float area;
  area = radius*radius*3.14;
  return area;
}

int main()
{
  float i;
  for (i=3.5; i<13; i++)
  {
    printf("area: %f, radius: %f\n", areaOfCircle(i), i);
  }
}
