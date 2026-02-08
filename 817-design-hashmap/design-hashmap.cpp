class MyHashMap {
public:
    int M;
    vector<list<pair<int,int>>>vec;
    int getindex(int key){
        return key%M;
    }
    MyHashMap() {
        M = 10007;
        vec = vector<list<pair<int,int>>>(M,list<pair<int,int>>{});
    }
    
    void put(int key, int value) {
        int k = getindex(key);
        list<pair<int,int>>&chain = vec[k];
        for(auto &it:chain){
            if(it.first==key) {
                it.second = value;
                return;
            }
        }
        chain.emplace_back(key,value);
    }
    
    int get(int key) {
        int k = getindex(key);
        list<pair<int,int>>&chain = vec[k];
        for(auto &it:chain){
            if(it.first==key) return it.second;
        }
        return -1;
    }
    
    void remove(int key) {
        int k = getindex(key);
        list<pair<int,int>>&chain = vec[k];
        for(auto it = chain.begin();it!=chain.end();++it){
            if(it->first==key) {
                chain.erase(it);
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */