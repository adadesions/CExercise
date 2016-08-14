#include <stdio.h>

int main() {
 int i;
 int sum = 0;

 for(i=0; i<5; i++){
  int n;
  printf("Enter a number : ");
  scanf("%d", &n);
  sum = sum + n;
 }
 printf("Result is %d\n",sum);

 return 0;
}
