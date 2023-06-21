#include<stdio.h>

void swap(int *number1, int *number2) {
  int tmp;

  tmp = *number1;
  *number1 = *number2;
  *number2 = tmp;
}

int main(){
  int a = 12;
  int b = 50;

  printf("a - %d | b - %d\n", a, b);
  swap(&a, &b);
  printf("a - %d | b - %d\n", a, b);
}
