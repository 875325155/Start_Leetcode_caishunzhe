class LRUCache {
public:
    struct node
    {
        int value;
        int time=10000;
    };
    LRUCache(int capacity) {
        map<int,node> s;
    }

    int get(int key) {


    }

    void put(int key, int value) {

    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
