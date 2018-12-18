#ifndef NAIVE_MATRIX_H
#define NAIVE_MATRIX_H

#include <fstream>
#include <string>
#include <cstddef>
#include "Matrix.h"
using std::string;
using std::size_t;

template <class Element>
class NaiveData {
public:
  size_t m,n;
  NaiveData(size_t m, size_t n);
  NaiveData(size_t m, size_t n, string filename);
  Element** matrixArray;
  ~NaiveData();
};

template <class Element>
class NaiveMatrix: public Matrix<Element> {

public:

  NaiveMatrix(size_t m, size_t n);
  NaiveMatrix(size_t m, size_t n, string filename);

  void set(size_t i, size_t j, Element x);
  Element get(size_t i, size_t j);

  ~NaiveMatrix();

private:


protected:

  NaiveData<Element>* dataContainer;

};
#endif // NAIVE_MATRIX_H
