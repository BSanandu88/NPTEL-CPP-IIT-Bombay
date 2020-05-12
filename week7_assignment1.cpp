#include <iostream>
#define repeat(x) for(int _iterator_i = 0, _iterator_limit = x; _iterator_i < _iterator_limit; _iterator_i ++)
#define main_program int main()
#include <cmath>
using namespace std;
int main(){
  int n; cin >> n;
  int A[n], B[n];

  for(int i=0; i<n; i++) cin >> A[i];
  for(int i=0; i<n; i++) cin >> B[i];

  int carry = 0;
  for(int i=0; i<n; i++){
    cout << (carry + A[i] + B[i]) % 10 << endl;
    carry = (carry + A[i] + B[i])/10;
  }
  cout << carry << endl;
}
