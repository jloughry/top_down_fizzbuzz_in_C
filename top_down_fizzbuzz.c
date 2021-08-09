#include <assert.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define USAGE "Usage: %s [n]"

void fizzbuzz(int);

int main(int argc, char ** argv) {
  int limit = 100; // probably this out to be long

  switch (argc) {
    case 1:
      break; 
    case 2:
      limit = atoi(argv[1]);
      break; 
    default:
      fprintf(stderr, USAGE"\n", argv[0]);
      return EXIT_FAILURE;
      // break; 
  }
  assert (limit > 0 && limit < INT_MAX);
  for (int i=1; i<=limit; i++) { 
    fizzbuzz(i);
  }
  return EXIT_SUCCESS;
}

int fizz(int);
int buzz(int);

void fizzbuzz(int i) {
  assert(i>0);
  assert(i<INT_MAX);
  if (!(fizz(i) + buzz(i))) { // can't use OR here because lazy evaluation
    fprintf (stdout, "%d", i);
  }
  fprintf (stdout, "\n");
}

int fizz(i) {
  assert(i > 0 && i < INT_MAX);
  if (0 == i % 3) {
    fprintf (stdout, "fizz");
    return 1;
  }
  else {
    return 0;
  }
}

int buzz(i) {
  assert(i > 0 && i < INT_MAX);
  if (0 == i % 5) {
    fprintf (stdout, "buzz");
    return 1;
  }
  else {
    return 0;
  }
}
