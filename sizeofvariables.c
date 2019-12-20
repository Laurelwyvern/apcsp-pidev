#include<stdio.h>

int main()
{
  int a = 545;
  char b = "545";
  float c = 545;
  double d = 545;

  // print value and size of an int variable
  printf("int a value: %d and size: %d bytes\n", a, sizeof(a));
  printf("char b value: %d and size: %d bytes\n", b, sizeof(b));
  printf("float c value: %d and size: %d bytes\n", c, sizeof(c));
  printf("double d value: %d and size: %d bytes\n", d, sizeof(d));
}
