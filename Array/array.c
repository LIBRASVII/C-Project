#include<stdio.h>
#define MAX 5

// function who takes two numbers
// and put and the array
int fn_array(int x, int y, int value) {
  int array[5] = {};

  printf("Unchanged array\n");
  for (int i = 0; i < MAX ; i ++) {
    printf("%d\n", array[i]);
  }

  printf("Give two number - ");
  scanf("%d %d", &x, &y);

  for (int i = 0; i < MAX; i++) {
    array[3] = x;
    array[0] = y;
    printf("%d\n", array[i]);
  }

  value = x + y;

  return value;
}

int main(){
  // declare the array values
  int array[5] = {100, 32, 54, 5, 0};
  
  // declare the variables 
  // who give the values to function 
  int x = 0;
  int y = 0;
  int z = 0;

  // call the function
  fn_array(x, y, z);

  printf("");
  // condition that print 
  // the value of the array
  for (int i = 0; i < MAX; i++) 
    printf("Array = %d\n", array[i]);

  return 0;
}
