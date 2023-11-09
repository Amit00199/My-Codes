#include <iostream>
using namespace std;

int main() {
  int first_term, common_difference, number_of_terms;

  cout << "Enter the first term of the A.P. series: ";
  cin >> first_term;
  cout << "Enter the common difference of the A.P. series: ";
  cin >> common_difference;
  cout << "Enter the number of terms in the A.P. series: ";
  cin >> number_of_terms;

  int sum = (number_of_terms / 2) * (2 * first_term + (number_of_terms - 1) * common_difference);

  cout << "The sum of the A.P. series is: " << sum << endl;

  return 0;
}
