#include "ccme.h"
#include <stdio.h>

int main(int argc, char** argv) {
  // Test initialization and set
  int m = 10;
  int n = 8;
  NaiveMatrix<double> A(m,n);

  // Row and column counts must be correct
  if (A.numRows() != m) {
    printf("%s\n","TEST FAILED: Row count did not match");
    return 1;
  }

  if (A.numCols() != n) {
    printf("%s\n","TEST FAILED: Col count did not match");
    return 1;
  }

  // Accessing the array should return 0
  for (int i=0; i < m; i++) {
    for (int j=0; j < n; j++) {
      if (A(i,j) != 0.0) {
        printf("%s %d %s %d %s \n","TEST FAILED: Element (",i,",",j,") nonzero");
        return 0;
      }
    }
  }

  // Accessing out of bounds should cause an exception


  // Test passed
  return 0;
}
