class MyHashSet {
   private:
    set<int> ss;

   public:
    MyHashSet() {}

    void add(int key) { ss.insert(key); }

    void remove(int key) { ss.erase(key); }

    bool contains(int key) {
        if (ss.find(key) != ss.end()) {
            return true;
        }
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