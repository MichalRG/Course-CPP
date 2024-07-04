#include <iostream>
#include <cstring> // c-style string functions
#include <cctype>

#include <string> // c++ string class

using namespace std;

int main() {
  bool skip_base_section {true};
  bool skip_comparison_section {true};
  bool skip_cpp_string_section {false};
  char first_name[20] {};
  char last_name[20] {};
  char full_name[50] {};
  char temp[50] {};

  // base section
  if (!skip_base_section) {
    cout << "-----------------" << endl;
    cout << "Base section" << endl;
    char first_name_uinitilized[20];

    cout << "random values from memory: " << first_name_uinitilized << endl;
    cout << "Enter your first name: ";
    cin >> first_name;
    cout << "Enter your last name: "; 
    cin >> last_name;

    // strlen will calc length name until it reach null character \0, return type is size_t
    cout << "Hello " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
    cout << "And your last name, " << last_name << " has " << strlen(last_name) << " characters" << endl;

    strcpy(full_name, first_name); // copy first_name to full_name until it reach null character \0
    strcat(full_name, " "); // concatenate full_name with a space
    strcat(full_name, last_name); // concatenate full_name with last_name
    cout << "Your full name is " << full_name << endl;
  }

  // C-style string comparison
  if (!skip_comparison_section) {

    cout << "Comparing C-style section" << endl;
    cout << "-----------------" << endl;
    
    cout << "Enter your full name: ";
    cin.getline(full_name, 50);// getline will read until it reach 50 characters so if I type "M K" <- it doesnt stop after M when it hit separator (whitespace)
    cout << "Your full name is " << full_name << endl;

    strcpy(temp, full_name);
    if(strcmp(temp, full_name) == 0) 
      cout << temp << " and " << full_name << " are the same" << endl;
    else
      cout << temp << " and " << full_name << " are different" << endl;

    for (size_t i{0}; i<strlen(full_name); i++) {
      if(isalpha(full_name[i]))
        full_name[i] = toupper(full_name[i]);
    }
    cout << "Your full name is " << full_name << endl;

    if(strcmp(temp, full_name) == 0) 
      cout << temp << " and " << full_name << " are the same" << endl;
    else
      cout << temp << " and " << full_name << " are different" << endl;

    cout << "Result of comparing " << temp << " and " << full_name << ": " << strcmp(temp,full_name)<<endl; //return 1 if lexicly first string greather than second string
    cout << "Result of comparing " << full_name << " and " << temp << ": " << strcmp(full_name,temp)<<endl;
  }


  // C++ string class
  if (!skip_cpp_string_section) {
    cout << "-----------------" << endl;
    cout << "C++ string class section" << endl;
    string s1{"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"}; 
    string s4 {"apple"};
    string s5 {s1};
    string s6 (s1, 0, 3); // 3 characters from s1 starting at position 0 App
    string s7 {10, 'X'};  // 10 'X' characters XXXXXXXXXX
    string s0;

    // wont be displayed because s0 is not initialized
    cout << s0 << endl;
    cout << s0.length() << endl;

    cout << "\nComparision" << "\n---------------------------------" << endl;
    cout << boolalpha;
    cout << s1 << " == " << s5 << ": " << (s1 == s5) << endl;
    cout << s1 << " == " << s2 << ": " << (s1 == s2) << endl;
    cout << s1 << " < " << s2 << ": " << (s1 < s2) << endl;
    cout << s2 << " > " << s1 << ": " << (s2 > s1) << endl;
    cout << s4 << " < " << s5 <<": " << (s4 <s5) << endl;

    // assingment
    s1 = "Watermelon";
    cout << "s1 is now: " << s1 << endl;
    s2 = s1;
    cout << "s2 is now: " << s2 << endl;
    s3 = "Frank";
    cout << "s3 is now: " << s3 << endl;
    s3[0] = 'C';
    cout << "s3 change first letter to 'C'" << s3;
    s3.at(0) = 'P'; // same as s3[0] = 'P'
    cout << "s3 change first letter to 'P'" << s3;

    //concatenation
    s3 = s5 + " and " + s2 + " juice";
    cout << "s3 is now: " << s3 << endl;
    
    // loop
    for (size_t i{0}; i<s1.length(); i++) {
      cout << s3.at(i);
    }
    cout << endl;

    for (char c: s1) {
      cout << c;
    }
    cout << endl;

    // substring
    s1 = "This is a test";
    cout << s1.substr(0,4) << endl; // This
    cout << s1.substr(5,2) << endl; // is
    cout << s1.substr(10,4) << endl; // test

    // erase
    s1 = "This is a test";
    s1.erase(0,5); // erase 5 characters from position 0
    cout << "After erase: " << s1 << endl; // is a test
    
    // getline
    string full_name_2;
    cout << "Enter your full name: ";
    getline(cin, full_name_2);
    cout << "Your full name is: " << full_name_2 << endl;

    // find
    s1 = "The secret word is Boo";
    size_t position = s1.find("Boo");
    cout << "Word 'Boo' found at position: " << position << endl;
    cout << endl;
  }

  return 0;
}