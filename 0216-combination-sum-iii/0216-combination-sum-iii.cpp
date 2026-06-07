class Solution {
public:
    vector<vector<int>> y;
    void a(vector<int> x,int sum,int l,int k,int n){
        if(x.size()==k){
            if(sum==n){
                y.push_back(x);

                return;
            }
            else{
                return;
            }
        }
        if(sum>=n){
            return;
        }
        
        if(l>9){
            return;
        }
        else{
            x.push_back(l);
            a(x,sum+l,l+1,k,n);
            x.pop_back();
            a(x,sum,l+1,k,n);
        }
        }
    vector<vector<int>> combinationSum3(int k, int n) {
        a({},0,1,k,n);
        return y;
    }
};