#include <iostream>
#define repeat(x) for(int _iterator_i = 0, _iterator_limit = x; _iterator_i < _iterator_limit; _iterator_i ++)
#define main_program int main()
#include <cmath>
using namespace std;
main_program{
  int n; cin >> n;

  int ti=1,tiplus1=2,tiplus2=4, res;

  if(n == 1) res = 1;
  else if(n == 2) res = 2;
  else if(n == 3) res = 4;
  else{
    int tiplus3=0;
    for(int iplus3=4; iplus3<=n; iplus3++){
      tiplus3 = ti+tiplus1+tiplus2;
      ti=tiplus1;
      tiplus1=tiplus2;
      tiplus2=tiplus3;
    }
    res = tiplus3;
  }
  cout << res << endl;
}
