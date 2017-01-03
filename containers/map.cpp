#include <iostream>
#include <map>

using namespace std;


int main(){

  map<string, string> mymap;
  map<string, string>::iterator it;


  mymap["Z"]="tejas";
  mymap["B"]="tejas2";
  mymap["A"]="tejas3";
  mymap["L"]="tejas4";

  std::cout << "Size of map is :"<< mymap.size() << std::endl;

  //mymap.clear(); // erase all information

  it = mymap.find("Z");
  mymap.erase(it);

  std::cout << "Size of map is :"<< mymap.size() << std::endl;

  std::cout <<"it->second" <<it->second << std::endl;

  if(mymap.empty()) std::cout << "Map is empty " << std::endl;
  else std::cout << "Map is not empty" << std::endl;



//print the map
  for(it = mymap.begin();it != mymap.end();it++){
    std::cout <<it->first << " : "<< it->second  << std::endl;
  }


  return 0;
}
