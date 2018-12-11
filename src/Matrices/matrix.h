#ifndef MATRIX_H
#define MATRIX_H

class Matrix {

  public:
    int m;
    int n;

    Matrix(int m, int n);
    void set(int i, int j, double x);
    double get(int i, int j);
    ~Matrix();

  private:
    double** matrixArray;
};

#endif // MATRIX_H
