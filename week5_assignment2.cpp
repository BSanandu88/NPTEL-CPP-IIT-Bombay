#include <iostream>
#define repeat(x) for(int _iterator_i = 0, _iterator_limit = x; _iterator_i < _iterator_limit; _iterator_i ++)
#define main_program int main()
#include <cmath>
using namespace std;
bool perfect(int n){
  int sum=0;
  for(int i=1; i<n; i++)
    if(n%i == 0) sum = sum + i;
  return sum == n;
}
main_program{
  int n; cin >> n;
  cout << perfect(n);
}
