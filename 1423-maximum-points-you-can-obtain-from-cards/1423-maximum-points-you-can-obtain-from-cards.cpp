class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=cardPoints[i];
        }
        int temp=sum;
        int l=k-1,r=cardPoints.size()-1;
        while(l!=-1){
            
            temp-=cardPoints[l];
            temp+=cardPoints[r];
            sum=max(sum,temp);
            l--;
            r--;
        }
        return sum;
    }
};