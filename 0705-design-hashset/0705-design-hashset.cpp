class MyHashSet {
public:
      vector<list<int>> m;
    int size;
//     CHAINING METHOD TO AVOID COLLISON 
    MyHashSet() {
    size = 100;
        m.resize(size);
        
    }
//   to insert -> k % m
    int hash(int key){
        return key % size;
    }
    
// iterator to iterate through list 
list<int> :: iterator search(int key){
    int i=hash(key);  
    return find(m[i].begin(),m[i].end(),key);
}
    void add(int key) {
//      avoid duplicacy
        if(contains(key)) return;
// otherwise
        int i=hash(key); //find index
        m[i].push_back(key);
    }
    
    void remove(int key) {
        if(!contains(key)) return;
        int i=hash(key);
//      erase function for doubly linked list
        m[i].erase(search(key));
    }
    
    bool contains(int key) {
     int i=hash(key);       
    //if(search(key) == m.end()) element is not present 
        if(search(key) != m[i].end())  // element is present
            return true;
        else return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */