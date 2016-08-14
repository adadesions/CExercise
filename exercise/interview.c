#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char name[64], birthday[16];
  int age = 0;

  printf("Name: ");
  scanf("%s", name);

  printf("Age: ");
  scanf("%d", &age);

  printf("Birthday: ");
  scanf("%s", birthday);

  printf("==========================\n");
  printf("Name: %s\n", name);
  printf("Age : %d\n", age);
  printf("Birthday: %s\n", birthday);
  printf("==========================\n");

  return 0;
}
