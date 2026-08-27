class Solution {
public:
    long long hours(vector<int>& a, int speed){
        int n = a.size();
        long long h = 0;
        for(int i=0; i<n; i++){
            h = h + a[i]/speed;
            if(a[i]%speed != 0){
                h++;
            }

        }
        return h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size()-1;
        int low=1, high=*max_element(piles.begin(),piles.end());
        int res=-1;
        while(low<=high){
            int guess=(low+high)/2;
            long long hour = hours(piles,guess);
            if(hour>h){
                low=guess+1;
            }
            else{
                res = guess;
                high=guess-1;
            }
        }
        return res;
        
    }
};