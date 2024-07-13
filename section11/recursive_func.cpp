#include <iostream>
#include <iomanip>

using namespace std;

unsigned long long factorial(unsigned long long n);
unsigned long long fibonacci(unsigned long long n);

double a_penny_doubled_everyday(int n, double pennies = 0.01);//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
void amount_accumulated();

unsigned long long factorial(unsigned long long n) {
  if (n == 0)
    return 1;
  return n * factorial(n - 1);
}

unsigned long long fibonacci(unsigned long long n) {
  if (n <=1)
    return n;
  return fibonacci(n-1)+fibonacci(n-2);
}

int sum_of_digits(int n) {    
    if (n == 0)
        return 0;
    return (n % 10 + sum_of_digits(n / 10));
}

int main() {
  cout << "Fibonacci - 5: " << fibonacci(5) << endl;
  cout << "Fibonacci - 30: " << fibonacci(30) << endl;
  cout << "Fibonacci - 40: " << fibonacci(40) << endl;

  cout << "Factorial - 5: " << factorial(5) << endl;
  cout << "Factorial - 10: " << factorial(10) << endl;
  cout << "Factorial - 20: " << factorial(20) << endl;

  int x{9876};
  cout << x/10 << endl;
  
  cout << 987%1000/100 << endl;
  int n{1234};
  int y {n};
  int sum {0};
  int modulator {10};
  int divider {1};
  int elements {0};
  int counter_helper {};
  do {
      y = counter_helper = y/10;
      elements++;
  } while (counter_helper > 0);
  for (int i{0}; i<elements; i++) {
      sum += n%modulator/divider;
      modulator*=10;
      divider*=10;
  }
  cout <<sum;
  //VS
  cout << sum_of_digits(1234);
  amount_accumulated();
  return 0;
}

int function_activation_count {0};

void amount_accumulated() {

  double total_amount = a_penny_doubled_everyday(25);

  cout <<  "If I start with a penny and doubled it every day for 25 days, I will have $" << setprecision(10) << total_amount;
}


double a_penny_doubled_everyday(int n, double pennies) {
    function_activation_count++;
 
    if (n == 1)
        return pennies;
    
    return a_penny_doubled_everyday(n-1, pennies*2);
}

int test_function_activation_count() {
    return function_activation_count;
}