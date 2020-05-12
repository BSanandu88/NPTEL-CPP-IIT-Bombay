#include <iostream>
#define repeat(x) for(int _iterator_i = 0, _iterator_limit = x; _iterator_i < _iterator_limit; _iterator_i ++)
#define main_program int main()
#include <cmath>
using namespace std;
main_program{
  char c; int x=0, y=0, orientation=0;

  while(true){
    cin >> c;
    if(c == 'F'){
      if(orientation == 0) x++;
      else if(orientation == 90) y++;
      else if(orientation == 180) x--;
      else y--;
    }
    else if(c == 'L') orientation = (orientation + 90) % 360;
    else break;
  }
  cout <<x<<' '<<y<<endl;
}
