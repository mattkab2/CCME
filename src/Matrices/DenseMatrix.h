#ifndef DENSE_MATRIX_H
#define DENSE_MATRIX_H

template <class Element>
class DenseData {
public:

  DenseData(DenseData source);
  DenseData(int m, int n);
  ~DenseData();

  Element& operator[](const int location) throw (const char *);

private:

  int majorIndexMin;
  int majorIndexMax;
  int minorIndexMin;
  int minorIndexMax;
  Element* dataContainer;

};

class DenseMatrix: public virtual Matrix {

public:

private:

protected:

};
#endif // DENSE_MATRIX_H
