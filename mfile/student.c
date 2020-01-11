#include <stdio.h>

struct Student {
  char fname[50];
  char lname[50];
  int age;
  int id;
};

void printStudent(struct Student* s){
  printf("Name: %s %s, Age: %d, ID: %d\n", s->fname, s->lname, s->age, s->id);
}

int main(int argc, char* argv[]){
  struct Student group[100];
  if (argc < 5 || (argc-1)%4 != 0){
    printf("%s: Input a few students in this order: Firstname Lastname Age ID. Remember that they always need to be complete, with all four fields, and each four fields refers to a different student.\n", argv[0]);
  } else {
    int r = 0;
    for (int i=1; i<argc; i+=4){
      sscanf(argv[i], "%s", group[r].fname);
      sscanf(argv[i+1], "%s", group[r].lname);
      if (sscanf(argv[i+2], "%d", &group[r].age) == 1){
        if (sscanf(argv[i+3], "%d", &group[r].id) == 1){
          r++;
        } else {
          printf("The ID must be an integer.\n");
          break;
        }
      } else {
        printf("The Age must be an integer.\n");
        break;
      }
    }
    for (int i=0; i<r; i++){
      printStudent(&group[i]);
    }
  }
  return 0;
}
