#include <iostream>
#include <exception>

class MatrixUsageException : public std::exception {

public:
  MatrixUsageException(const char* msg, const char* file_, int line_,
    const char* func_, const char* info_ = "")
    : std::exception(msg), file(file_), line(line_), func(func_), info(info_) {

  }

  const char* get_file() const {return file;}
  int get_line() const {return line;}
  const char* get_info() const {return info;}

private:
  const char* file;
  int line;
  const char* func;
  const char* info;
}
