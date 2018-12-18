#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include "ccme.h"

int main(int argc, char** argv) {
  // Load A, B, x, y into arrays (double)
  //double A[8][8];
  double B[8][8];
  double x[8];
  double y[8];

  NaiveMatrix<double> A = NaiveMatrix<double>(8,8,"Data/A.txt");

  std::ifstream fileIn;
  fileIn.open("Data/B.txt");
  for (int i=0; i < 8; i++) {
    for (int j=0; j < 8; j++) {
      fileIn >> B(i,j);
    }
  }

  // Test matrix sum (A + B) for all matrix storage formats

  // Test matrix sum (A + A) for all matrix storage formats

  // Test matrix difference (A - B) for all matrix storage formats

  // Test matrix difference (B - B) for all matrix storage formats

  // Test matrix product (A*B) for all matrix storage formats

  // Test matrix product (B*A) for all matrix stroage formats

  // Test matrix product (A*A) for all matrix stroage formats

  // Test matrix product (A*x) for all matrix storage formats

  // Test matrix product (B*y) for all matrix storage formats

  // Test matrix product (x*A*x) for all storage formats

  // Test matrix product (x*B*y) for all storage formats

  // Test matrix transpose for all storage formats

  return 0;
}
