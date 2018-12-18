#include "ccme.h"
#include <stdio.h>

int main(int argc, char** argv) {
  // Test initialization and set
  NaiveMatrix<double> A();

  // Empty constructor should set sizes to -1
  if (A.m != -1) {
    printf("TEST FAILED: On false initialization, row count is not -1");
    return 1;
  }
  if (A.n != -1) {
    printf("TEST FAILED: On false initialization, row count is not -1");
    return 1;
  }

  // Accessing the array should throw an error

  // Setting a value in the array should cause an error


  // Test passed
  return 0;
}
