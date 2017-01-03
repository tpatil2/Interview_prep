#include <iostream>
#include <string>
using namespace std;

class CSU_Chico{
public:
  CSU_Chico(){
    cout << "Its CSU CSU_Chico"<<endl;
  }
};

class Computer_Sci: public CSU_Chico{

};

class Mathamatics: public CSU_Chico{

};

class Comp_maths:public Mathamatics, public Computer_Sci{

};

int main(){
  Comp_maths c;
  return 0;
}
