#include <iostream>
#define repeat(x) for(int _iterator_i = 0, _iterator_limit = x; _iterator_i < _iterator_limit; _iterator_i ++)
#define main_program int main()
#include <cmath>
using namespace std;

class Cricketer{
        private:
          char name[100];
                int matches;
                int innings;
                int notOut;
                int runs;
                double average;
        public:
                Cricketer(){};
                Cricketer(char *str, int mat, int inns, int nt, int r){
                        int i=0;
                  while(str[i] != 0){
                    this->name[i] = str[i];
                                i++;
                        }

                        this->matches = mat;
                        this->innings = inns;
                        this->notOut = nt;
                        this->runs = r;
                }

                void read(){
                        cin >> name >> matches >> innings >> notOut >> runs ;
                }
             double avg(){
                        if(matches < innings)
                          average = -1;
                        else if(innings-notOut < 0)
                                average = -1;
                        else if(0 == (innings-notOut) )
                                average = runs;
                        else
                                average = 1.0 * runs/(innings-notOut);

                        return average;
                }

                bool operator>(Cricketer c1){
                        c1.avg();
                        this->avg();
                        return average > c1.average ;
                }

};
int main(){

        Cricketer c1;
        c1.read();
        cout << c1.avg() << " ";

        Cricketer c2;
        c2.read();
        cout << c2.avg() << " " ;

        cout << (c1 > c2) ;
}
