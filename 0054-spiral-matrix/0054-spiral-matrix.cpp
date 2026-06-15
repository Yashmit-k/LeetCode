class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> a;

        int l=0,r=matrix[0].size()-1,t=0,b=matrix.size()-1;
        while(l<=r && t<=b){
            for(int i=l;i<=r;i++){
                cout<<matrix[t][i]<<endl;
                a.push_back(matrix[t][i]);
            }
            cout<<"---"<<endl;
            for(int i=t+1;i<=b;i++){
                cout<<matrix[i][r]<<endl;
                a.push_back(matrix[i][r]);
            }
            cout<<"---"<<endl;
            if(t<b){
                for(int i=r-1;i>=l;i--){
                    cout<<matrix[b][i]<<endl;
                    a.push_back(matrix[b][i]);
                }
            }
            
            cout<<"---"<<endl;
            if(l<r){
                for(int i=b-1;i>t;i--){
                cout<<matrix[i][l]<<endl;
                a.push_back(matrix[i][l]);
            }
            }
            
            cout<<"----------"<<endl;
            l++;
            r--;
            b--;
            t++;
        }

        return a;
    }
};