#include <iostream>
#define repeat(x) for(int _iterator_i = 0, _iterator_limit = x; _iterator_i < _iterator_limit; _iterator_i ++)
#define main_program int main()
#include <cmath>
using namespace std;

#include <map>

int main(){
  map<string,string> boss;
  int n; cin >> n;
  repeat(n){
    string s,b; cin >> s >> b;
    boss[s] = b;
  }

  string S,B; cin >> S >> B;
  while(true){
    if(B == S){
      cout << 1 << endl;
      break;
    }
    if(boss.count(S) == 0){
      cout << 0 << endl;
      break;
    }
    S = boss[S];
  }
}
