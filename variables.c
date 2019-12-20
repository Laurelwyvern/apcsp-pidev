int main()
{
  int a;
  int b = 3;
  int c;

  a = 2;
  c = a + b;
  printf("Sum of %d and %d is %d\n", a, b, c);
  //swap values now...
  int tmp = a;
  a = c;
  c = tmp;
  printf("a: %d\nc: %d", a, c);
}
