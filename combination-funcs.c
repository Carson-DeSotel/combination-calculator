#include "combination-funcs.h"
#include <stdio.h>  /* for printf() */
#include <stdlib.h>

long getNumerator(int n){
  long numerator = 1;

  for(int i = 1; i <= n; i++){
    numerator = numerator *  i;
  }

  return numerator;
}

long getDenominator(int n, int r){
  long denominator = 1;

  for(int i = 1; i <= r; i++){
    denominator = denominator * i;

    if(i == n - r){
      denominator *= i;
    }
  }

  return denominator;
}

int getCombination(int n, int r){
  return getNumerator(n) / getDenominator(n, r);
}

char* latex(int n, int r){
  int result = n / r;
  char* latex = malloc(128);

  sprintf(latex, "$ \\binom{%d}{%d} = \\frac{%d!}{%d!(%d - %d)} = %ld $", n, r, n, r, n, r, result);

  return latex;
}
