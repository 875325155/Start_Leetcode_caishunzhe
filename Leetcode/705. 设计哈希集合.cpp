class MyHashSet {
public:
    /** Initialize your data structure here. */
    MyHashSet() {
    map<int,int> data;
    }

    void add(int key) {
        data[key]++;
    }

    void remove(int key) {
        data.remove(key);
    }

    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return(data[key]>0);
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
