#ifndef MATRIX_H
#define MATRIX_H

class Matrix {

  public:
    int m;
    int n;

    Matrix(int m, int n);

    virtual void set(int i, int j, double x) = 0;
    virtual double get(int i, int j) = 0;

    ~Matrix();

  private:

};

#endif // MATRIX_H
