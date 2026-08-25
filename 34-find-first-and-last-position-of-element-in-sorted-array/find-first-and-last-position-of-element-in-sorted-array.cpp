class Solution {
public:
    
    int first(vector<int>& a, int x){
        int low = 0;
        int high = a.size()-1;
        int res = -1;
        while(low<=high){
            int guess = (low+high)/2;
            if(a[guess]>x){
                high=guess-1;
            }
            else if(a[guess]<x){
                low=guess+1;
            }
            else{
                res = guess;
                high=guess-1;
            }
        }
        return res;
    }
    int second(vector<int>& a, int x){
        int low = 0;
        int high = a.size()-1;
        int res = -1;
        while(low<=high){
            int guess = (low+high)/2;
            if(a[guess]>x){
                high=guess-1;
            }
            else if(a[guess]<x){
                low=guess+1;
            }
            else{
                res = guess;
                low=guess+1;
            }
        }
        return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int firstPosition = first(nums,target);
        int lastPosition = second(nums,target);
        return {firstPosition, lastPosition};
        
    }
};