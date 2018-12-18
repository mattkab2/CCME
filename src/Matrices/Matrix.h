#ifndef MATRIX_H
#define MATRIX_H

#include<cstddef>
#include<string>
using std::size_t;
using std::string;

template <class Element>
class Matrix {

  public:

    // Matrix Attributes
    size_t numRows();
    size_t numCols();
    size_t numDiags();

    // Required Constructors
    Matrix(size_t m, size_t n);
    //virtual Matrix(const Matrix& A) = 0;

    // Data Access: single element
    virtual Element operator()(size_t i, size_t j) = 0;
    virtual const Element operator()(size_t i, size_t j) const = 0;

    // Data Access: slice
    virtual Matrix& operator()(string rows, string cols) = 0;
    virtual const Matrix& operator()(string rows, string cols) const = 0;
    //virtual Vector operator()(string rows, size_t col) = 0;
    //virtual const Vector operator()(string rows, size_t col) const = 0;
    //virtual Vector operator()(size_t row, string cols) = 0;
    //virtual const Vector operator()(size_t row, string cols) const = 0;

    // Unitary operations
    virtual Matrix& operator~() = 0;
    virtual Matrix& operator-() = 0;

    // Other operations
    virtual Matrix& operator+(const Matrix& rightMat) = 0;
    virtual Matrix& operator+=(const Matrix& rhs) = 0;
    virtual Matrix& operator-(const Matrix& rightMat) = 0;
    virtual Matrix& operator-=(const Matrix& rhs) = 0;
    virtual Matrix& operator*(const Matrix& rightMat) = 0;
    virtual Matrix& operator*=(const Matrix& rightMat) = 0;

    // Compare operators
    virtual bool operator==(const Matrix& rhs) = 0;
    virtual bool operator!=(const Matrix& rhs) = 0;

    // Concatenation (||, &&)
    virtual Matrix& operator|(const Matrix& rightMat) = 0;
    virtual Matrix& operator&(const Matrix& lowMat) = 0;

    // Destructor
    ~Matrix();

  private:

  protected:
    const size_t m;
    const size_t n;
};

#endif // MATRIX_H
