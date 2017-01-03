#include <iostream>
using namespace std;

int main(){

int n=20;
char* p;

while(n>0){

    if(n%2 == 0) std::cout << "0" << std::endl;
    else std::cout << "1" << std::endl;

    n=n/2;
}

std::cout << "Bin : "<< p << std::endl;



string binary = std::bitset<8>(20).to_string(); //to binary
std::cout<<binary<<"\n";

unsigned long decimal = std::bitset<8>(binary).to_ulong();
std::cout<<decimal<<"\n";
return 0;

}
