#include <stdio.h>

int main(){
 int num;
 printf("Enter positive integer: ");
 scanf("%d", &num);
 if( num<0 ){
  return 0;
 }

 if( num%2 == 0 ){
  printf("Even number");
 }
 else{
  printf("Odd number");
 }
 printf("\n");

 return 0;
}
