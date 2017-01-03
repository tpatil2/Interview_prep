#include <iostream>

using namespace std;

class Me{
public:
    virtual void mydetails()=0;

};


class Myhome:public Me{
public:
  void mydetails(){
    std::cout << "My home is India" << std::endl;
  }

};


class Myschool:public Me{
public:
  void mydetails(){
    std::cout << "My School is JNV" << std::endl;
  }
};


int main(int argc, char const *argv[]) {
    Myhome h;
    Myschool s;
    Me* m1 = &h;
    Me* m2 = &s;
    m1->mydetails();
    m2->mydetails();
    h.mydetails();
    s.mydetails();

  return 0;
}
