#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector <int> vec1;
  vector <int> vec2;

  vec1.push_back(10);
  vec1.push_back(20);

  cout<< "Vec1 elements [0]: " <<vec1.at(0) << " [1]: " <<vec1.at(1) << ". The size of vec1: "<< vec1.size() <<endl;
  
  vec2.push_back(100);
  vec2.push_back(200);

  cout<< "Vec2 elements [0]: " <<vec2.at(0) << " [1]: " <<vec2.at(1) << ". The size of vec2: "<< vec2.size() <<endl;

  vector <vector<int>> vector_2d;
  vector_2d.push_back(vec1);
  vector_2d.push_back(vec2);

  cout << "Vec2D: " <<endl;
  cout << "[0][0]:" << vector_2d.at(0).at(0) <<endl;
  cout << "[0][1]:" << vector_2d.at(0).at(1) <<endl;
  cout << "[1][0]:" << vector_2d.at(1).at(0) <<endl;
  cout << "[1][1]:" << vector_2d.at(1).at(1) <<endl;

  vec1.at(0) = 1000;
  cout << "Changed vec1, result for vec2d: " << vector_2d.at(0).at(0)<<endl;
  cout << "Vec1 value:" << vec1.at(0);
  return 0;
}