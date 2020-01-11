#include <stdio.h>
#include <string.h>

int main(){
  char lwr1[26];
  char* sp1 = lwr1;
  
  int i;
  for (i=0; i<26; i++){
    *(sp1+i) = 'a'+i;
  }

  char lwr2[] = "abcdefghijklmnopqrstuvwxyz";
  
  printf("lwr1: %s\nlwr2: %s\n", lwr1, lwr2);

  if (strcmp(lwr1, lwr2) == 0){
    printf("They're the same.\n");
  }else{
    printf("They're different.\n");
  }

  for (i=0; i<26; i++){
    *(sp1+i) = *(sp1+i)-32;
  }
  
  //copypasting cuz writing a function isn't very easy - keeps spewing errors lol. What a WET programmer...
  printf("lwr1: %s\nlwr2: %s\n", lwr1, lwr2);

  if (strcmp(lwr1, lwr2) == 0){
    printf("They're the same.\n");
  }else{
    printf("They're different.\n");
  }

  char newlwr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  strcat(newlwr, lwr2);
  printf("lwr1: %s\nlwr2: %s\nnewlwr: %s\n", lwr1, lwr2, newlwr);
}
