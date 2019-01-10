#include "ccme.h"
#include <stdio.h>

int main(int argc, char** argv) {
  // Test initialization and set
  NaiveMatrix<double> a(10,10);
  for (int i=0; i < 10; i++) {
    for (int j=0; j < 10; j++) {
      printf("%d \n",a.get(i,j));
      if (a.get(i,j) != 0.0) {return 1;}
      a.set(i,j,1.0);
    }
  }

  // Test storage
  for (int i=0; i < 10; i++) {
    for (int j=0; j < 10; j++) {
      printf("%d \n",a.get(i,j));
      if (a.get(i,j) != 1.0) {return 1;}
    }
  }

  return 0;
}
