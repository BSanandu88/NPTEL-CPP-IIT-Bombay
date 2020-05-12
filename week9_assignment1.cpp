#include <iostream>
#define repeat(x) for(int _iterator_i = 0, _iterator_limit = x; _iterator_i < _iterator_limit; _iterator_i ++)
#define main_program int main()
#include <cmath>
using namespace std;
struct Observation{
        int date;
        int num;

        void read(){
                cin >> date >> num;
        }

};

int uncured( Observation o[], int size, int D, int dt){
  int estimate = 0;
  for(int i=0; i<size; i++)
    if(o[i].date +D > dt && o[i].date <= dt)
      estimate = estimate + o[i].num;
  return estimate;
}
int main(){
        int D; cin >> D;
        int n; cin >> n;
        Observation observations[n];
        for(int i=0; i<n; i++) observations[i].read();
        while(true){
                int date; cin >> date;
                if(date == -1) break;
                     cout << date << " " << uncured(observations, n, D, date) << endl;
        }
}
