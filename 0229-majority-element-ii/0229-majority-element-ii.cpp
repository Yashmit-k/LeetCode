class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1=0,c2=1,count1=0,count2=0;
        for(auto i:nums){
            if(c1==i){
                count1++;
            }
            else if(c2==i){
                count2++;
            }
            else if(count1==0){
                c1=i;
                count1++;
            }
            else if(count2==0){
                c2=i;
                count2++;
            }
            else{
                count1--;
                count2--;
            }

        }
        count1 = count2 = 0;

        for (int x : nums) {
            if (x == c1)
                count1++;
            else if (x == c2)
                count2++;
        }
        vector<int> ans;

        if (count1 > nums.size() / 3)
            ans.push_back(c1);

        if (count2 > nums.size() / 3)
            ans.push_back(c2);

        return ans;
    }
};