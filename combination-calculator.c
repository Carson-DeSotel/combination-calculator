#include <stdio.h>
#include <string.h> /* Use for strcmp() */
#include <stdlib.h> /* atoi() */

int main(int argc, char* argv[]){

  if(argc < 1){
    printf("Not enough arguments passed in to calculate a combination. \n");
    printf("USAGE: \n");
    printf("  combination-calculator <n> <r> <--latex> \n");
    printf("  <n>: total number of terms \n");
    printf("  <r>: number of terms to choose \n");
    printf("  <--latex>: add to print out code for insertion to LaTeX");
    return 1;
  }

  /* nCr = n! / r!(n - r)! */
  long numerator = 1, denominator = 1;

  int n = atoi( argv[1] );
  int r = atoi( argv[2] );

  if(r > n){
    printf("r must be less than n");
    return 2;
  }

  if(r <= 0 && n <= 0){
    printf("RESULT: 0");
    return 2;
  }

  for(int i = 1; i <= n; i++){
    numerator = numerator *  i;
//    printf("numerator: %ld \n", numerator);
  }

  for(int i = 1; i <= r; i++){
    denominator = denominator * i;

    if(i == n - r){
      denominator *= i;
    }

//    printf("denominator: %ld \n", denominator);
  }

  long result = numerator / denominator;

  printf("NUMERATOR: %ld\n", numerator);
  printf("DENOMINATOR: %ld\n", denominator);
  printf("RESULT: %ld \n", result);

  if(argc > 2){
    if(strcmp(argv[3], "--latex") == 0){
      printf("$ \\binom{%d}{%d} = \\frac{%d!}{%d!(%d - %d)} = %ld $",
              n, r, n, r, n, r, result);
    }
  }

  return 0;
}
