#include <stdio.h>

int main(){
 float f,c;
 printf("Enter a Temperature in Fahrenheit\u2109 : ");
 scanf("%f",&f);

 c = 5*(f-32)/9;
 printf("Temperature : %.2f\u2103\n", c);

 return 0;
}
