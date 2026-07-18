class Solution {

public:

    int maximumSum(vector<int>& arr){
        int res = arr[0];
        int nodelete = arr[0];
        int onedelete = INT_MIN;
        for(int i = 1; i < arr.size(); i++){
            int prev_onedelete = onedelete;
            int prev_nodelete = nodelete;
            nodelete = max(nodelete + arr[i], arr[i]);
            int v2;
            if(prev_onedelete == INT_MIN) {
                v2 = arr[i];
            } 
            else {
                v2 = prev_onedelete + arr[i];
            }
            nodelete = max(prev_nodelete + arr[i], arr[i]);
            onedelete = max(v2, prev_nodelete);
            res = max(res, max(onedelete, nodelete));
        }
        return res;
    }

};