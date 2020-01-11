#include <stdio.h>

float areaOfCircle(float radius){
  float area;
  area = radius*radius*3.14;
  return area;
}

int main(int argc, char* argv[]){
  
  if (argc != 3){
    printf("%s: Alright, input two floats.\n", argv[0]);
  } else {
    float l = 1;
    float u = 9;
    if (sscanf(argv[1], "%f", &l) != 1){
      printf("You sure those are floats?\n");
    } else if (sscanf(argv[2], "%f", &u) != 1){
      printf("You sure those are floats?\n");
    } else {
      for (float i=l; i<u; i++){
        printf("radius: %f, area: %f\n", i, areaOfCircle(i));
      }
    }
  }
}
