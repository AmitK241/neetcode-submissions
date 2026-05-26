class Solution {
public:

    int maximum(vector<int> &arr,int start,int end){
        int maxi = INT_MIN;

        for(int i = start; i <= end; i++){
            maxi = max(maxi, arr[i]);
        }

        return maxi;
    }

    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        vector<int> ans;

        for(int l = 0; l <= nums.size() - k; l++){

            int r = l + k - 1;

            int m = maximum(nums, l, r);

            ans.push_back(m);
        }

        return ans;
    }
};