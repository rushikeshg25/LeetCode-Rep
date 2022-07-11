class SmallestInfiniteSet {
public:
    set<int>s;
    int cur;
    SmallestInfiniteSet() {
        cur=1;
    }
    
    int popSmallest() {
        if(s.size()){
        int temp=*s.begin();
        s.erase(s.begin());
        return temp;
        }
        else{
            cur+=1;
            return cur-1;
        }
    }
    
    void addBack(int num) {
        if(cur>num)s.insert(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */