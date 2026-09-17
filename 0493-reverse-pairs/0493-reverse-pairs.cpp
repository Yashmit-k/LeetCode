class Solution {
public:
    int merge(vector<int>& arr, int l, int mid, int r) {
        int count = 0;

        // Count reverse pairs
        int j = mid + 1;

        for (int i = l; i <= mid; i++) {
            while (j <= r && (long long)arr[i] > 2LL * arr[j]) {
                j++;
            }

            count += j - (mid + 1);
        }

        // Normal merge
        int i = l;
        j = mid + 1;

        vector<int> temp;

        while (i <= mid && j <= r) {
            if (arr[i] <= arr[j]) {
                temp.push_back(arr[i]);
                i++;
            } else {
                temp.push_back(arr[j]);
                j++;
            }
        }

        while (i <= mid) {
            temp.push_back(arr[i]);
            i++;
        }

        while (j <= r) {
            temp.push_back(arr[j]);
            j++;
        }

        for (int k = l; k <= r; k++) {
            arr[k] = temp[k - l];
        }

        return count;
    }

    int mergesort(vector<int>& arr, int l, int r) {
        if (l >= r)
            return 0;

        int mid = l + (r - l) / 2;

        int count = 0;

        count += mergesort(arr, l, mid);
        count += mergesort(arr, mid + 1, r);
        count += merge(arr, l, mid, r);

        return count;
    }

    int reversePairs(vector<int>& nums) {
        return mergesort(nums, 0, nums.size() - 1);
    }
};