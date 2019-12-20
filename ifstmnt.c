#include <stdio.h>

int main()
{
  int a = 0;

  // if statement to test is a is equal to 0
  if (a == 0) {
    printf("a is 0\n");
  }
  if (a != 0) {
    printf("a is not 0\n");
  }
  if (a > 0) {
    printf("a is positive\n");
  }
  if (a < 0) {
    printf("a is negative\n");
  }
  if (a >= 0) {
    printf("a is not negative\n");
  }
  if (a <= 0) {
    printf("a is not positive\n");
  }
  
  int b = 2;
  //& and ||
  if (a == 0 && b == 2) {
    printf("a is 0 and b is 2\n");
  }
  if (a == 2 || b == 2) {
    printf("either a or b is equal to 2\n");
  }
  
  //not
  if (!(1 == 2)) {
    printf("'1 is equal to 2' is not true\n");
  }
    
}
