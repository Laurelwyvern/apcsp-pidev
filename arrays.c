#include <stdio.h>

int arrayAdd(int arr[], int s, int n)
{
  int r;
  int arr2[s];
  for (r=0; r<s; r++)
  {
    arr2[r] = arr[r] + n;
    printf("original: %d, incremented: %d \n", arr[r], arr2[r]);
  }
}

int main()
{
  int ary[100];
  int i;
  for (i=0; i<100; i++)
  {
    ary[i] = i*i;
  }
  arrayAdd(ary, 100, 1);
}
