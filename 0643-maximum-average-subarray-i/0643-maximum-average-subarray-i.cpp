class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0, j=0, s=0, maxm=0;
        int n= nums.size();
        while(j<k){
            s= s+nums[j];
            j++;
        }
        maxm=s;
        while(j<n){
            s= s-nums[i];
            i++;
            s= s+nums[j];
            j++;
            maxm = max(s, maxm);
        }
        return (double) maxm/k;
    }
};