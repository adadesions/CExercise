#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
 int a,b,c,max;
 if( argc < 4)
  return 0;

 a = atoi(argv[1]);
 b = atoi(argv[2]);
 c = atoi(argv[3]);
 
 if(a>b && a>c){
  max = a;
 } 
 else if(b>a && b>c){
  max = b;
 }
 else{
  max = c;
 }

 printf("Maximum value : %d\n", max);
 return 0;
}
