#include <iostream>
#define repeat(x) for(int _iterator_i = 0, _iterator_limit = x; _iterator_i < _iterator_limit; _iterator_i ++)
#define main_program int main()
#include <cmath>
using namespace std;
int main(){
  int intray[25], top=0;
  int n; cin >> n;

  for(int i=0; i<n; i++){
    int nToday; cin >> nToday;
    for(int j=0; j<nToday; j++){
      int letter; cin >> letter;
      intray[top] = letter;
      top++;
    }
    top = max(top-8,0);
  }

  for(int i=0; i<top; i++)
    cout << intray[i]<<endl;
}
