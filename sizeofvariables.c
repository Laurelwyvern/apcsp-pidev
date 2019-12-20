#include <stdio.h>

int main()
{
  int a = 545;
  char b = '5';
  float c = 545.0;
  double d = 545;

  // print value and size of an int variable
  printf("int a value: %d and size: %lu bytes\n", a, sizeof(a));
  printf("char b value: %d and size: %lu bytes\n", b, sizeof(b));
  printf("float c value: %f and size: %lu bytes\n", c, sizeof(c));
  printf("double d value: %f and size: %lu bytes\n", d, sizeof(d));
}
