#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( int argc, char *argv[] ){
 if( argc <= 1){
  return 0;
 }
 int a,b,c,D;
 a = atoi(argv[1]);
 b = atoi(argv[2]);
 c = atoi(argv[3]);
 D = (b^2)-4*a*c;
 
 printf("D = %d\n",D);

 if( D>0 ){
  printf("2 answers");
 } 
 else if( D<0 ){
  printf("No answer");
 }
 else {
  printf("1 answer");
 }
 printf("\n");
 return 0;

}
