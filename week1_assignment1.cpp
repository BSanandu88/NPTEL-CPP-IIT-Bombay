#include <iostream>
#define repeat(x) for(int _iterator_i = 0, _iterator_limit = x; _iterator_i < _iterator_limit; _iterator_i ++)
#define main_program int main()
#include <cmath>
using namespace std;
main_program{
  int n;
  cin >> n;
  repeat(n){
    repeat(n){
      cout <<'*';
    }
    cout << endl;
 }
}
