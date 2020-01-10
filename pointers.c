#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;
  float d = 3.5;
  float e = 4.5;

  ptrtoa = &a;
  float* pd = &d;
  float* pe = &e;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  if (sizeof(ptrtoa) == sizeof(int)){
    printf("The value of ptrtoa is %d\n", ptrtoa);
    printf("It stores the value %d\n", *ptrtoa);
    printf("The address of a is %d\n", &a);

    printf("The value of d is %f, and the address is %d\n", d, &d);
    printf("The value of e is %f, and the address is %d\n", e, &e);
  } else if (sizeof(ptrtoa) == sizeof(long long)){
    printf("The value of ptrtoa is %lld\n", ptrtoa);
    printf("It stores the value %lld\n", *ptrtoa);
    printf("The address of a is %lld\n", &a);

    printf("The value of d is %f, and the address is %lld\n", d, &d);
    printf("The value of e is %f, and the address is %lld\n", e, &e);
  }
  float tmp;
  tmp = *pd;
  *pd = *pe;
  *pe = tmp;
  printf("d is now %f, and e is %f", d, e);

}
