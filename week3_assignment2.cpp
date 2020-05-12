#include <iostream>
#define repeat(x) for(int _iterator_i = 0, _iterator_limit = x; _iterator_i < _iterator_limit; _iterator_i ++)
#define main_program int main()
#include <cmath>
using namespace std;
main_program{
  int L; cin >> L;
  int C = 1;
  bool FOUND = false;
  for(int i=0; i<9; i++){
    // When control reaches here L should hold the last read number.
    // C should be j if the last j numbers read were all L.

    //   ... MISSING CODE ...

    // Student Instruction: MISSING CODE should be entered into the
    // space after the detailed instruction comment below.


/*
Instruction to the student for the assignment:
The code you enter should follow the invariant given in the comment.
You will notice that the invariant is indeed true at the beginning of
the first iteration: the last number read is indeed in L, and the last
C numbers read are L.  The code you give should read in the next
number, and then set the variables L and C so that the invariant
becomes true at the end of the iteration (so it will be true at the
beginning of the next iteration).  Your code should also set
FOUND to true if you discover that three identical numbers have been
read consecutively.  The values of L, C will help you decide when to
do this.  You will see that there is something interesting about your
program: it does not remember the last 3 numbers typed in by the user,
it only remembers whether they were identical.

Only submit what is supposed to go in place of ...MISSING CODE...
If you go down, you will see that the code that ends the program is
in place - already written. Just write the "MISSING CODE".

*/
int t;cin>>t;
if(t==L)
{
  C=C+1;
  if(C==3)
  {FOUND=true;break;}
}
else
{
  C=1;
  L=t;
}
  }
  if(FOUND) cout << 1 << endl;
  else cout << 0 << endl;
}
