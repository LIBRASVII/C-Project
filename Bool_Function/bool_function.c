#include<stdbool.h> 
#include<stdio.h>


/* THIS FUNCTION NOT WORK WELL  */ 
bool for_function(int result) { 
  char *statement[10];
  bool op=false;
    
  printf("What is the first letter of your last name?");
  scanf("%s", *statement);  // need to convert statement type
                            // because the result variable result is int
  return result;
}

int main(){
  bool statement = true;
  for_function(statement);

}
