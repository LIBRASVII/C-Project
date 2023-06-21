#include<stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct {
  char name[40];
  int age;
}person;

void person();

void fn_person_data() {
  printf("Your name -> ");
  fgets(name.person, 40, stdin);
}

void void_fn_while() {
  char x[50]; 
  printf("Type one number: ");
  scanf("%s\n", x);
  fflush(stdin);
  printf("Your number - %s", x);
}

int fn_while(int x) {
  while(x > 0 && x < 10) {
    printf("%d\n", x);
    x = x + 2;
  }
  printf("End fn\n");
  return x;
}

int main(){
  int x = 0;

  fn_while(1);
  void_fn_while();

  while (x!= 10) {
    printf("%d\n", x);
    x = x + 1;
  }

  
}
