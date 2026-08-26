class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size()-1;
        int low=0, high=n, res = -1;
        while(low<=high){
            int guess=(low+high)/2;
            if(nums[guess]==target){
                return guess;
            }
            //condition for part 1
            if(nums[guess]>nums[n]){
                //check in part 1 for target ki guess ke left jaana yaa right
                if(nums[guess]<target){
                    low=guess+1;
                }
                else {
                    if(target<nums[0]){
                        low=guess+1;
                    }
                    else {
                        high=guess-1;
                    }
                }
            continue;
            }
            
            //for part 2
            else {
                if(target<nums[guess]){
                    high=guess-1;
                }
                else {
                    if(target>nums[n]){
                        high=guess-1;
                    }
                    else {
                        low=guess+1;
                    }
                }

            }
        }
        return res;
        
    }
};