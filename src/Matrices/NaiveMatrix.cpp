#include "NaiveMatrix.h"

template<class Element>
NaiveData<Element>::NaiveData(int m, int n) : m(m), n(n) {
  matrixArray = new Element*[m];
  for(int i=0; i<m; i++) {
    matrixArray[i] = new Element[n];
    for(int j=0; j<n; j++) {
      matrixArray[i][j] = 0.0;
    }
  }
}

template<class Element>
NaiveData<Element>::~NaiveData() {
  for(int i=0; i<m; i++) {
    delete[] matrixArray[i];
  }
  delete[] matrixArray;
}

template<class Element>
NaiveMatrix<Element>::NaiveMatrix(int mInput, int nInput) : Matrix(mInput, nInput) {
  dataContainer = new NaiveData<Element>(mInput, nInput);
}

template<class Element>
NaiveMatrix<Element>::~NaiveMatrix() {
  delete dataContainer;
}

template<class Element>
void NaiveMatrix<Element>::set(int i, int j, Element x) {
  dataContainer->matrixArray[i][j] = x;
  return;
}

template<class Element>
Element NaiveMatrix<Element>::get(int i, int j) {
  return dataContainer->matrixArray[i][j];
}

template class NaiveMatrix<double>;
