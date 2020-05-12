#include <iostream>
#define repeat(x) for(int _iterator_i = 0, _iterator_limit = x; _iterator_i < _iterator_limit; _iterator_i ++)
#define main_program int main()
#include <cmath>
using namespace std;
main_program{
  int n;
  double x;
  double poly=0, coeff=0;
  cin >> n;
  cin >> x;
  repeat(n+1){
    cin >> coeff;
    poly = poly*x + coeff;
  }
  cout << poly <<endl;
}
