#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main(){

  vector<string> s1;
  vector<string> s2;

  s1.push_back("Tejas");
  s1.push_back("ok");
  s1.push_back("nice");
  s1.push_back("patil");

  s2.push_back("fine");
  s2.push_back("Tejas");
  s2.push_back("good");
  s2.push_back("patil");

  vector<string> result;
  vector<string>::iterator it;

  for(it=s1.begin();it!=s1.end();it++){
    if(find(s2.begin(),s2.end(),*it) != s2.end()){
      result.push_back(*it);
    }
  }

  for(it=result.begin();it!=result.end();it++){
    std::cout << *it << '\n';
  }


  return 0;
}
