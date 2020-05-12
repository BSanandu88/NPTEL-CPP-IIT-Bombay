#include <iostream>
#define repeat(x) for(int _iterator_i = 0, _iterator_limit = x; _iterator_i < _iterator_limit; _iterator_i ++)
#define main_program int main()
#include <cmath>
using namespace std;
main_program{
  int n;
  double x;
  cin >> n >> x;

  double sum = 1, term = 1;

  for(int i=0; i<n-1; i++){
    // sum : of terms 0 through i
    // term : ith term, counting from 0.
    term = - term * x * x/(2*i+2)/(2*i+1);
    sum = sum + term;
  }
  cout << sum << endl;

}
