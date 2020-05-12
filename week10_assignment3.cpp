#include <iostream>
#define repeat(x) for(int _iterator_i = 0, _iterator_limit = x; _iterator_i < _iterator_limit; _iterator_i ++)
#define main_program int main()
#include <cmath>
using namespace std;


struct eArray{
private:
  int* elements;
  int n;
public:
  eArray(){n=0; elements = NULL;}  // construct an array with 0 elements
  int &operator[](int i){ return elements[i];}
    // return a reference to the ith element of the array
  void push_back(int v){
    int* newE = new int[n+1];
    for(int i=0; i<n; i++) newE[i] = elements[i];
    delete[] elements;
    elements = newE;
    elements[n] = v;
    n++;
  }
  int size() const {return n;}
  eArray(const eArray &rhs){
    n = rhs.n;
    elements = new int[n];
    for(int i=0; i<n; i++) elements[i] = rhs.elements[i];
  }
  ~eArray(){
    delete[] elements;
  }

  eArray& operator=(const eArray &rhs){
    if(this == &rhs) return *this;
    // If it is a self assignment, we do nothing.

    delete[] elements; // Release the memory allocated earlier

    n = rhs.size();
    elements = new int[n];
    for(int i=0; i<n; i++) elements[i] = rhs.elements[i];
    return *this;
  }
};

void f(eArray A){A[5] = 5000;}   // changes only local copy
void g(eArray &A){A[6] = 6000;}  // changes original

int main(){
  eArray A,B;
  for(int i=0; i<10; i++){
    int v; cin >> v;
    A.push_back(v);
  }
  f(A);
  g(A);
  B = A;
  B[8] = 800;
  A[8] = 8000;
  for(int i=0; i<B.size(); i++) cout << B[i] <<' ';
  cout << endl;
}
