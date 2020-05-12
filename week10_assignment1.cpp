#include <iostream>
#define repeat(x) for(int _iterator_i = 0, _iterator_limit = x; _iterator_i < _iterator_limit; _iterator_i ++)
#define main_program int main()
#include <cmath>
#include <map>
using namespace std;

int main(){
  map<string, int>  m ;
  while(true){
    string country; cin >> country;
    if(country == "EXIT") break;
    int count; cin >>  count;
    m[country] = m[country] + count;
  }
    for (auto x : m){
      cout << x.first << ":" << x.second << endl;
    }
}
