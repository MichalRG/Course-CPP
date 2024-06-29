#include <iostream>
#include <optional>

using namespace std;

void if_statement_sub_section(optional<int> cin_value = nullopt) {
  int num {};
  const int min {10};
  const int max {100};

  std::cout << "Enter a number between " << min << " and " << max << ": ";
  if (!cin_value) {
    cin >> num;
  } else {
    num = cin_value.value();
  }

  if (num >= min) {
    std::cout << endl << "================== 1st if statement =============" << endl;
    std::cout << num << " is greater than " << min << endl; 

    int diff {num - min};
    std::cout << num << " is " << diff << " greater than " << min << endl;
  }
  
  if (num <= max) {
    std::cout << endl << "================== 2nd if statement =============" << endl;
    std::cout << num << " is less than or equal to " << max << endl;

    int diff {max - num};
    std::cout << num << " is " << diff << " less than " << max << endl;
  }

  if (num >= min && num <= max) {
    std::cout << endl << "================== 3rd if statement =============" << endl;
    std::cout << num << " is in range " << min << " and " << max << endl;

    int diff_min {num - min};
    int diff_max {max - num};

    std::cout << num << " is " << diff_min << " greater than " << min << " and " << diff_max << " less than " << max << endl;
    std::cout << "So it means that 1st statement is true and 2nd statement is true as well" << endl;
  }

  if (num == min || num == max) {
    std::cout << endl << "================== 4th if statement =============" << endl;
    std::cout << num << " is right on the boundary" << endl;

    std::cout << "This means all 4 statements are true" << endl;
  }
}

void grades(optional<int> grade = nullopt) {
  int score {};
  std::cout << "Enter your score on the exam (0-100): ";
  if (!grade) {
    cin >> score;
  } else {
    score = grade.value();
  }

  char letter_grade {};

  if (score >=0 && score <= 100) {
    if (score >= 90) {
      letter_grade = 'A';
    } else if (score >= 80) {
      letter_grade = 'B';
    } else if (score >= 70) {
      letter_grade = 'C';
    } else if (score >= 60) {
      letter_grade = 'D';
    } else {
      letter_grade = 'F';
    }

    std::cout << "Your grade is " << letter_grade<<endl;
    if (letter_grade == 'F') 
      std::cout << "Sorry u have to repeat the course" << endl;
    else 
      std::cout << "Congrats you passed the course" << endl;
  } else {
    std::cout << "Sorry, " << score << " is not in range" << endl;
    return;
  }
}

void letter_grade(optional<char> letter = nullopt) {
  char letter_grade {};

  cout << "Enter the letter grade you expect on the exam: ";
  if (!letter) {
    cin >> letter_grade;
  } else {
    letter_grade = letter.value();
  }

  switch (letter_grade) {
    case 'a':
    case 'A':
      cout << "You need a 90 or above, study head!" << endl;
      break;
    case 'b':
    case 'B':
      cout << "You need 80-89 for a B, go study!" << endl;
      break;
    case 'c':
    case 'C':
      cout << "You need 70-75 for an average grade" << endl;
      break;
    case 'd':
    case 'D':
      cout << "Hmm, you should strive for a better grade. All you need is 60-69" << endl;
      break;
    case 'f':
    case 'F':
    {
      char confirm {};
      cout << "Are u sure? (Y/N) " ;
      cin >> confirm;
      if (confirm == 'y' || confirm == 'Y') {
        cout << "OK, I guess you didn't study..." << endl;
      } else if (confirm == 'n' || confirm == 'N') {
        cout << "Good - go study!" << endl;
      } else
        cout << "Illegal choice";
      break;
    }
    default:
      cout << "Sorry, not a valid grade" << endl;
  } 
}

void enum_example_switch() {
  enum Direction {
    left, right, up, down
  };

  Direction heading {left};

  // if you use enumeration and u don't handle all possilbe values in swithc it will display for u a warning
  switch (heading) {
    case left:
      cout << "Going left" << endl;
      break;
    case right:
      cout << "Goin right" << endl;
      break;
    default:
      cout << "OK" << endl;
  }
}

void conditional_expression() {
  int num {};

  cout << "Enter an integer: ";
  cin >> num;

  // if (num % 2 == 0)
  //   cout << num << " is even" << endl;
  // else
  //   cout << num << " is odd" << endl;

  cout << num << " is " << (num % 2 == 0 ?  "even" : "odd") << endl;
}

int main() {
  if_statement_sub_section(50); //passing 50 to skip cin operation and dont block program

  //nested_if_statement_sub_section
  grades(75); //passing 75 to skip cin operation and dont block program

  //switch_statement_sub_section
  letter_grade('A');

  enum_example_switch();

  conditional_expression();
  
  return 0;
}
