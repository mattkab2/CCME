#include "matrix.h"

Matrix::Matrix(int mInput, int nInput) : m(mInput), n(nInput) {
  matrixArray = new double*[m];
  for(int i=0; i<m; i++) {
    matrixArray[i] = new double[n];
    for(int j=0; j<n; j++) {
      matrixArray[i][j] = 0.0;
    }
  }
}

Matrix::~Matrix() {
  for(int i=0; i<m; i++) {
    delete[] matrixArray[i];
  }
  delete[] matrixArray;
}

void Matrix::set(int i, int j, double x) {
  matrixArray[i][j] = x;
  return;
}

double Matrix::get(int i, int j) {
  return matrixArray[i][j];
}
