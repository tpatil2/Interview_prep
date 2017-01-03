#include <iostream>
#include <map>
#include <list>
#include <unordered_map>

using namespace std;

class LRUCache{

private:
  // key, val, key iterator
  unordered_map<int,pair<int , list<int>::iterator>> _cache;
  // list of keys  1st=MSU   last=lru
  list<int> _lru;
  int _capacity;

public:
   LRUCache(int capacity){
    _capacity=capacity;
  }

//----------------------------------------------
  int get(int key){
    //find key
    auto item = _cache.find(key);
    //if key is not found
    if(item == _cache.end()){
      return -1;
    }//else key found
    use(item);
    return item->second.first;
  }

  //----------------------------------------------

  int set(int key, int value){

    auto item = _cache.find(key);
    //if key is  found
    if(item != _cache.end()){
        //update
         use(item);
        _cache[key] = {value, _lru.begin()};
        return 0;
    }//else key not found
    //check the capacity and
      if(_cache.size() == _capacity){
        //remove the LRU item
        _cache.erase(_lru.back());
        _lru.pop_back();
      }
      //insert new pair
      _lru.push_front(key);
      _cache.insert({key,{value, _lru.begin()}});


  }

  //----------------------------------------------
  void use(unordered_map<int,pair<int , list<int>::iterator>>::iterator& it){

    _lru.erase(it->second.second);
    _lru.push_front(it->first);
    it->second.second = _lru.begin();

  }
};



int main(){
  LRUCache *cache = new LRUCache(3);

  cache->set(1,1);
  cache->set(2,2);
  std::cout << cache->get(1) << std::endl;
  cache->set(3,3);
  std::cout << cache->get(2) << std::endl;

  return 0;
}
