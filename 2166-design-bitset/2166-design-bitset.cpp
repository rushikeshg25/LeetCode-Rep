class Bitset {
public:
    int cnt;
    bool isflip;
    vector<int>bit;
    
    Bitset(int size) {
        bit.resize(size);
        cnt=0;
        isflip=false;
    }
    
    void fix(int idx) {
        if(!isflip){
           if(bit[idx]==0) {bit[idx]=1; 
            cnt++;
        }
        }
        else{
           if(bit[idx]==1){ bit[idx]=0;
            cnt++;
                          }
        }
        
    }
    
    void unfix(int idx) {
         if(!isflip){
            if(bit[idx]==1) {bit[idx]=0;
             cnt--;
        }}
        else{
            if(bit[idx]==0){ bit[idx]=1;
            cnt--;
        }}
        
    }
    
    void flip() {
        isflip=!isflip;
        cnt=bit.size()-cnt;
    }
    
    bool all() {
        return cnt==bit.size();
    }
    
    bool one() {
        return cnt>=1;
    }
    
    int count() {
        return cnt;
    }
    
    string toString() {
        string ans="";
        if(!isflip){
        for(auto i:bit)
            if(i==1) ans+='1';
            else ans+='0';
        }
        else{
        for(auto i:bit){
            if(i==1) ans+='0';
            else ans+='1';
        }
        }
        return ans;
    }
};

/**
 * Your Bitset object will be instantiated and called as such:
 * Bitset* obj = new Bitset(size);
 * obj->fix(idx);
 * obj->unfix(idx);
 * obj->flip();
 * bool param_4 = obj->all();
 * bool param_5 = obj->one();
 * int param_6 = obj->count();
 * string param_7 = obj->toString();
 */