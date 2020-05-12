#include <iostream>
#define repeat(x) for(int _iterator_i = 0, _iterator_limit = x; _iterator_i < _iterator_limit; _iterator_i ++)
#define main_program int main()
#include <cmath>
using namespace std;
double sum(double s1, double s2, double s3=0){
  return s1+s2+s3;
}



int main(){
  double p,q,r,s,t; cin >> p >> q >> r >> s >> t;
  cout << sum(p,q) <<' '<<sum(r,s,t)<<endl;
}
