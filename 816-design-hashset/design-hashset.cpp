class MyHashSet {
public:
    int M;
    vector<list<int>>vec;
    int getindex(int key){
        return key%M;
    }
    MyHashSet() {
        M = 10001;
        vec = vector<list<int>>(M,list<int>{});
    }
    
    void add(int key) {
        int k = getindex(key);
        auto itr = find(vec[k].begin(),vec[k].end(),key);
        if(itr==vec[k].end()){
            vec[k].push_back(key);
        }
    }
    
    void remove(int key) {
        int k = getindex(key);
        auto itr = find(vec[k].begin(),vec[k].end(),key);
        if(itr!=vec[k].end()){
            vec[k].remove(key);
        }
    }
    
    bool contains(int key) {
        int k = getindex(key);
        auto itr = find(vec[k].begin(),vec[k].end(),key);
        if(itr!=vec[k].end()){
            return true;
        }
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