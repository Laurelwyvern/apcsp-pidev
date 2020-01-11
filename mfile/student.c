#include <stdio.h>
#include "student.h"

void printStudent(struct Student* s){
  printf("Name: %s %s, Age: %d, ID: %d\n", s->fname, s->lname, s->age, s->id);
}
