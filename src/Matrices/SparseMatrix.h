#ifndef SPARSE_MATRIX_H
#define SPARSE_MATRIX_H

template <class Element>
class SparseData {
public:

  SparseData(SparseData source);
  SparseData(int m, int n);
  ~SparseData();

  Element& operator[](const int location) throw (const char *);

private:

  int majorIndexMin;
  int majorIndexMax;
  int minorIndexMin;
  int minorIndexMax;
  std::map<int, std::map> dataContainer;

};

class SparseMatrix: public virtual Matrix {

public:

private:

protected:

};
#endif // SPARSE_MATRIX_H
