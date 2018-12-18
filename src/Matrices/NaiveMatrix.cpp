#include "NaiveMatrix.h"

template<class Element>
NaiveData<Element>::NaiveData(size_t m, size_t n) : m(m), n(n) {
  matrixArray = new Element*[m];
  for(size_t i=0; i<m; i++) {
    matrixArray[i] = new Element[n];
    for(int j=0; j<n; j++) {
      matrixArray[i][j] = 0.0;
    }
  }
}

template<class Element>
NaiveData<Element>::NaiveData(size_t m, size_t n, string filename)
: m(m), n(n) {
  matrixArray = new Element*[m];
  for(size_t i=0; i<m; i++) {
    matrixArray[i] = new Element[n];
  }
  std::ifstream fileIn;
  fileIn.open(filename);
  for (size_t i=0; i < 8; i++) {
    for (size_t j=0; j < 8; j++) {
      fileIn >> matrixArray[i][j];
    }
  }
}

template<class Element>
NaiveData<Element>::~NaiveData() {
  for(size_t i=0; i<m; i++) {
    delete[] matrixArray[i];
  }
  delete[] matrixArray;
}

template<class Element>
NaiveMatrix<Element>::NaiveMatrix(size_t mInput, size_t nInput) : Matrix<Element>(mInput, nInput) {
  dataContainer = new NaiveData<Element>(mInput, nInput);
}

template<class Element>
NaiveMatrix<Element>::NaiveMatrix(size_t mInput, size_t nInput, string filename)
: Matrix<Element>(mInput, nInput) {
  dataContainer = new NaiveData<Element>(mInput, nInput, filename);
}

template<class Element>
NaiveMatrix<Element>::~NaiveMatrix() {
  delete dataContainer;
}

template<class Element>
void NaiveMatrix<Element>::set(size_t i, size_t j, Element x) {
  dataContainer->matrixArray[i][j] = x;
  return;
}

template<class Element>
Element NaiveMatrix<Element>::get(size_t i, size_t j) {
  return dataContainer->matrixArray[i][j];
}

#ifdef CCME_ENABLE_FLOAT_MATRIX
template class NaiveMatrix<float>;
#endif //CCME_ENABLE_FLOAT_MATRIX

//#ifdef CCME_ENABLE_DOUBLE_MATRIX
template class NaiveMatrix<double>;
//#endif //CCME_ENABLE_DOUBLE_MATRIX

#ifdef CCME_ENABLE_INT_MATRIX
template class NaiveMatrix<int>;
#endif //CCME_ENABLE_INT_MATRIX

/*
#ifdef CCME_ENABLE_COMPLEX_MATRIX
template class NaiveMatrix<complex>
#endif //CCME_ENABLE_COMPLEX_MATRIX
*/
