#include <iostream>
#define repeat(x) for(int _iterator_i = 0, _iterator_limit = x; _iterator_i < _iterator_limit; _iterator_i ++)
#define main_program int main()
#include <cmath>
using namespace std;
int words(char A[]){
  int count=0;
  bool inWord=false;
  for(int i=0; A[i] != '\0'; i++){
    if(A[i] == ' '){
      inWord = false;
    }
    else{
      if(inWord == false) count++;  // start of a word
      inWord = true;
    }
  }
  return count;
}

int main(){
  char line[80];
  cin.getline(line,80);
  cout << words(line) << endl;
}
