#include <iostream>
#define repeat(x) for(int _iterator_i = 0, _iterator_limit = x; _iterator_i < _iterator_limit; _iterator_i ++)
#define main_program int main()
#include <cmath>
using namespace std;
void multiprint(char c, int n){
  repeat(n) cout << c;
}
main_program{
  char c; cin >> c;
  int n; cin >> n;
  multiprint(c,n);
}
