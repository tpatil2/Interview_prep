#include <iostream>
#include <functional>

using namespace std;

void perform(function<void()> f){
f();
}

int main(){
  int x=100;

  auto funk = [&](){
    x++;
  };

  perform(funk);

  cout << "x: "<<x << '\n';

  return 0;
}
