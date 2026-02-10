#include <algorithm>
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int ma = 0;

        while (left < right) {
            int h = min(height[left], height[right]);
            int water = h * (right - left);
            ma = max(ma, water);

            // Move the pointer with smaller height
            if (height[left] < height[right])
                left++;
            else
                right--;
        }
        return ma;
    }
};