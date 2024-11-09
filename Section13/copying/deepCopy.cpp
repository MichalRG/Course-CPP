#include <iostream>

using namespace std;

class Deep {
  private:
    int *data;
  public:
    void set_data_value(int d) {*data = d;}
    int get_data_value() {return *data;}
    // Constructor
    Deep(int d);
    // Copy Constructor
    Deep(const Deep &source);
    // Destrucotr
    ~Deep();
};

Deep::Deep(int d) {
  data = new int;
  *data = d;
}

Deep::Deep(const Deep &source)
  :Deep {*source.data} {
    cout << "Copy constructor - deep copy" << endl;
}

Deep::~Deep() {
  delete data;
  cout << "Destrouct feeing data" << endl;
}

void display_deep(Deep s) {
  cout << s.get_data_value() << endl;
}

int main() {
  Deep obj1 {100};
  display_deep(obj1); // no problem with shallow as during destructing it wont free memory location of obj1

  Deep obj2 {obj1}; // no problem with shallow copy as it's not longer points on the same memory location, instead
  // it creats separate memory location (value) for obj2

  obj2.set_data_value(1000); // also no problem with shallow copy, because it won't override obj1 data value

  return 0;
}
