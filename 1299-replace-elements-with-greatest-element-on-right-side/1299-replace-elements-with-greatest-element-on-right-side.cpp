class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        int s=-1;
        for(int i=n-1;i>=0;i--){
            int temp=arr[i];
            arr[i]=s;
            if(s<temp)s=temp;
        }
        return arr;
    }
};