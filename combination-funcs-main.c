#include <stdio.h>
#include <string.h> /* Use for strcmp() */
#include <stdlib.h> /* atoi() */
#include "combination-funcs.h"

int main(int argc, char* argv[]){

  /* nCr = n! / r!(n - r)! */

  if(argc < 1){
    printf("Not enough arguments passed in to calculate a combination. \n");
    printf("USAGE: \n");
    printf("  combination-calculator <n> <r> <--latex> \n");
    printf("  <n>: total number of terms \n");
    printf("  <r>: number of terms to choose \n");
    printf("  <--latex>: add to print out code for insertion to LaTeX");
    return 1;
  }

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

  long numerator = getNumerator(n);
  long denominator = getDenominator(n, r);

  long result = getCombination(n, r);

  printf("NUMERATOR: %ld\n", numerator);
  printf("DENOMINATOR: %ld\n", denominator);
  printf("RESULT: %ld \n", result);

  if(argc > 2){
    if(strcmp(argv[3], "--latex") == 0){
      printf("%s\n", latex(n, r));
    }
  }

  return 0;
}
