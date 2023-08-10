class MyHashMap {
public:
 vector<list<pair<int,int>>> m;
    int size;
    MyHashMap() {
        size=100;
        m.resize(size);
    }
    int hash(int key){
    return key%size;
    }
//     search function 
//     iterator to iterate through the list 
   list<pair<int,int>> :: iterator search(int key){
        int i=hash(key);
// iterator to find key and value 
   list<pair<int,int>> :: iterator it=m[i].begin();
  
       while(it != m[i].end()) // jb tk mai search krti rahungi
       {
           if(it->first == key) 
               return it; 
           it++;
       }
       return it;
    }
    void put(int key, int value) {
        int i=hash(key);
//    if key already exists 
        remove(key);
        m[i].push_back({key,value});
    }
    
    int get(int key) {
       int i=hash(key);
    list<pair<int,int>> :: iterator it = search(key);
        
//   if element  does not exist 
        if(it == m[i].end()) return -1;
        else return it->second;
    }
    
    void remove(int key) {
     int i = hash(key);
list<pair<int,int>> :: iterator it=search(key);
        
    // if exists then remove in doubly linked list use erase 
 if(it != m[i].end())   m[i].erase(search(key));
        
    }
};

