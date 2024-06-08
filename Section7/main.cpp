#include  <iostream>
#include <vector>

using namespace std;

int main() {
  /******
   * 
   * ARRAYS
   * 
  ********/
  char vowels[] {'a', 'e', 'i', 'o', 'u'};
  cout << "Vowels: " << vowels << endl;

  // cin >> vowels[5]; //out of bounds - dont do this it will try to rewrite value in your memory 

  double hi_temps[] {90.1, 89.8, 77.5, 81.6};
  cout << "The First highest temperature is " << hi_temps[0];

  hi_temps[0] = 100.7;

  cout << "The First highest temperature is now: " << hi_temps[0];

  int test_scores[5];

  cout << "First score at index 0: " << test_scores[0]; //junk values from memory because lack of initialization
  cout << "First score at index 1: " << test_scores[1]; //junk values from memory because lack of initialization

  int test_scores_2[5] {};
  cout << "First score at index 0: " << test_scores_2[0]; // initialized so it will display 0
  cout << "First score at index 1: " << test_scores_2[1]; // initialized so it will display 0

  cout << "Notice the value of the array name is: "<< test_scores_2 << endl; // it display index in memory

  /****************
   * 
   * MULTI DIMENSIONAL AARYS
   * 
  *****************/

  int movie_rating [2][3] 
  {
    {1,2,3},
    {4,5,6}
  };
  
  cout << "Last rate for sec revier: " << movie_rating[1][2];

  /***********
   * 
   * Vectors (dynamic array)
   * 
  *********/

  vector <char> vector_vowels {'a','e','y'};
  vector <int> vector_test_scores (10); //initlize with 10 values equal 0
  vector <double> vector_hi_temps (365, 80.0); //initialize with 365 indexes each with value 80.0

  cout << "VECTOR vowels: " << vector_vowels[0] <<endl; //such getting value doesnt do bounce checking so it doesnt check does index is initialized
  cout << "VECTOR tests scores: " << vector_test_scores[0] <<endl;
  cout << "VECTOR hi_temps: " << vector_hi_temps[0] <<endl;

  cout << "VECTOR Hi_temps last index: "<< vector_hi_temps.at(364);
  vector_hi_temps.push_back(90.0);
  cout << "Pushed new values for last index in vector: "<< vector_hi_temps.at(365) << ". The size of vector " << vector_hi_temps.size()<<endl; 
  // cout << "Should throw excpetion: " << vector_hi_temps.at(366);

  vector <vector<int>> movie_ratings {
    {1,2,3,4},
    {1,2,3,4}
  };
  cout << "Here is movie rating for sec revier for 4th movie: "<< movie_ratings.at(1).at(3) << endl;

  return 0;
} 