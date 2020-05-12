#include <iostream>
#define repeat(x) for(int _iterator_i = 0, _iterator_limit = x; _iterator_i < _iterator_limit; _iterator_i ++)
#define main_program int main()
#include <cmath>
using namespace std;
int main(){
  bool present[100];
  for(int i=0; i<100; i++) present[i] = false;

  while(true){
    char command; cin >> command;
    if(command == 'a'){
      int r; cin >> r;
      present[r] = true;
    }
    else if(command == 'd'){
      int r; cin >> r;
      present[r] = false;
    }
    else break; // will break for other characters too..
  }

  for(int i=0; i<100; i++)
    if(present[i]) cout <<i<<endl;

}
