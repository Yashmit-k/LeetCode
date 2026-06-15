class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int count=1;
        vector<vector<int>> a;
        a.push_back(vector<int>(count));
        a[0][0]=1;
        while(count<numRows){
            a.push_back(vector<int>(count+1));
            for(int i=0;i<=count;i++){
                if(i-1<0 || i==count){

                    a[count][i]=1;
                }
                else{
                    a[count][i]=a[count-1][i-1]+a[count-1][i];
                }
                cout<<a[count][i]<<" ";
            }
            cout<<endl;
            count++;
        }
        return a;
    }
};