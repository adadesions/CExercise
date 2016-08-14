#include <stdio.h>

int main(){
  int i, input, result = 0;

  int set2[5];
// Method 1
  // for(i=0; i<5; i++){
  //   printf("Enter a number(%d) : ", i+1);
  //   scanf("%d", &input);
  //   result = result + input;
  // }
  // printf("Sum of 5 numbers is %d\n", result);

// Method 2
  for(i=0; i<5; i++){
    printf("Enter a number(%d)", i+1);
    scanf("%d", &set2[i]);
    printf("%d\n", set2[i]);
  }
  return 0;
}
