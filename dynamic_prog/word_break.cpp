// A recursive program to test whether a given string can be segmented into
// space separated words in dictionary

#include <iostream>
using namespace std;
int dictionaryContains(string word)
{
    string dictionary[] = {"mobile","samsung","sam","sung","man","mango",
                           "icecream","and","go","i","like","ice","cream"};
    int size = sizeof(dictionary)/sizeof(dictionary[0]);
    for (int i = 0; i < size; i++)
        if (dictionary[i].compare(word) == 0)
           return true;
    return false;
}

// returns true if string can be segmented into space separated
// words, otherwise returns false
bool wordBreak(string str)
{
    int size = str.size();
    // Base case
    if (size == 0)  return true;
    // Try all prefixes of lengths from 1 to size
    for (int i=1; i<=size; i++)
    {
        std::cout << "i is "<< i  << std::endl;
        std::cout << "str.substr(0, i) )"<< str.substr(0, i) << std::endl;
        std::cout << "str.substr(i, size-i)"<< str.substr(i, size-i) << std::endl;


        if (dictionaryContains( str.substr(0, i) ) &&
            wordBreak( str.substr(i, size-i) )){
              std::cout << "return true" << std::endl;
              return true;

            }
    }

    // If we have tried all prefixes and none of them worked
    return false;
}


int main()
{
    wordBreak("ilikesamsung")? cout <<"Yes\n": cout << "No\n";
    return 0;
}
