#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include "ccme.h"

int main(int argc, char** argv) {
  // Load A, B, x, y into arrays (double)

  NaiveMatrix<double> A = NaiveMatrix<double>(8,8,"Data/A.txt");
  NaiveMatrix<double> B = NaiveMatrix<double>(8,8,"Data/B.txt");

  NaiveMatrix<double> A_transpose;
  NaiveMatrix<double> B_transpose;

  A_transpose = ~A;
  B_transpose = ~B;

  // Verify transpose
  for (int i = 0; i < A.getRows(); i++) {
    for (int j = 0; j < A.getCols(); j++) {
      if (A(i,j) != A_tranpose(j,i) || B(i,j) != B_transpose(j,i)) {return 1;}
    }
  }

  // Test self-assignment
  A = ~A;
  B = ~B;

  // Verify transpose
  for (int i = 0; i < A.getRows(); i++) {
    for (int j = 0; j < A.getCols(); j++) {
      if (A(i,j) != A_tranpose(i,j) || B(i,j) != B_transpose(i,j)) {return 1;}
    }
  }

  return 0;
}
