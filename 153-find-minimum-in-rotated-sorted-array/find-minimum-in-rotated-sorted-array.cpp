class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size()-1;
        int low=0, high=n;
        int res = -1;
        while(low<=high){
            int guess = (low+high)/2;
            if(nums[guess] > nums[n]){
                low=guess+1;
            }
            else {
                res = guess;
                high = guess-1;
            }
        }
        return nums[res];

        
    }
};