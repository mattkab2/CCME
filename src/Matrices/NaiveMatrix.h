#ifndef NAIVE_MATRIX_H
#define NAIVE_MATRIX_H

#include "Matrix.h"

template <class Element>
class NaiveData {
public:
  int m;
  int n;
  NaiveData(int m, int n);
  Element** matrixArray;
  ~NaiveData();
};

template <class Element>
class NaiveMatrix: public Matrix {

public:

  NaiveMatrix(int m, int n);

  void set(int i, int j, Element x);
  Element get(int i, int j);

  ~NaiveMatrix();

private:


protected:

  NaiveData<Element>* dataContainer;

};
#endif // NAIVE_MATRIX_H
