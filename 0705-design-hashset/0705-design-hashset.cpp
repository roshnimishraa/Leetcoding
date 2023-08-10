class MyHashSet {
public:
    vector<list<int>> m;
    int size;
    MyHashSet() {
        size=100;
        m.resize(size);
    }
    int hash(int key){
      return key % size;
    }
    
// iterator to iterate through list 
    list<int> :: iterator search(int key) {
        int i=hash(key);
// find-> return an iterator [first,last) if not found return last
    return find(m[i].begin(),m[i].end(),key);
        
    }
    void add(int key) {
  if(contains(key)) return;
        
        int i=hash(key);
  m[i].push_back(key);    
    }
    
    void remove(int key) {
        int i=hash(key);
        if(!contains(key)) return;
    // for doubly linked list erase method is used
        m[i].erase(search(key));
    }
    
    bool contains(int key) {
        int i=hash(key);
        
    if(search(key) !=m[i].end()) return true;
    else 
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */