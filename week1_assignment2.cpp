#include <iostream>
#define repeat(x) for(int _iterator_i = 0, _iterator_limit = x; _iterator_i < _iterator_limit; _iterator_i ++)
#define main_program int main()
#include <cmath>
using namespace std;
main_program{
  int n;
  cin >> n;
// print the horizontal bar
  repeat(n){
    repeat(3*n){
      cout <<'*';
    }
    cout << endl;
  }
// print the vertical bar
  repeat(2*n){
    repeat(n){
      cout <<' '; // print blank
    }
    repeat(n){
      cout <<'*';
    }
    cout << endl;
  }
}
