#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring {
private:
  char *str; // pointer to a char[] that holds a C-style string

public:
  void display() const;
  Mystring(); // No-args constructor
  Mystring(const char *s); // Overloaded constructor
  Mystring(const Mystring &source); // Copy constructor
  ~Mystring(); // Destructor
  int get_length() const; // getters
  const char *get_str() const;
};

#endif // _MYSTRING_H_