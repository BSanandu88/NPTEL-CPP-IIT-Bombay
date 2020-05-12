#include <iostream>
#define repeat(x) for(int _iterator_i = 0, _iterator_limit = x; _iterator_i < _iterator_limit; _iterator_i ++)
#define main_program int main()
#include <cmath>
using namespace std;
void printIntersection(int s1[], int n1, int s2[], int n2){
  int i1=0,i2=0;
  while(i1<n1 && i2<n2){
    if(s1[i1] == s2[i2]){
      cout <<s1[i1]<<endl;
      i1++;
      i2++;
    }
    else if(s1[i1] < s2[i2]) i1++;
    else i2++;
  }
}

int main(){
  int s1[20], s2[20], n1, n2;
  cin >> n1;
  for(int i=0; i<n1; i++) cin >>s1[i];
  cin >> n2;
  for(int i=0; i<n2; i++) cin >>s2[i];

  // assuming n1,n2 <= 20 and elements given in increasing order

  printIntersection(s1,n1,s2,n2);
}
