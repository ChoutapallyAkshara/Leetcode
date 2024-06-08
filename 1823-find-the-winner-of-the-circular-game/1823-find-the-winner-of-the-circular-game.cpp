class Solution {
public:
    void josephus(vector<int>&v, int start, int k){
        if(v.size()==1){
            return;
        }
        start +=k;
        int s=v.size();
        start%=s;
        v.erase(v.begin()+start);
        josephus(v,start,k);
        return;
    }
    int findTheWinner(int n, int k) {
        k--;
        vector<int>v;
        for(int i=0;i<n;i++){
            v.push_back(i+1);
        }
        josephus(v,0,k);
        return v[0];
    }
};