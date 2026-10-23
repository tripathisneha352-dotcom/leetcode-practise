class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        int n=trips.size();
        vector<vector<int>> v;
        for(int i=0; i<n; i++){
            v.push_back({trips[i][1], trips[i][0]});
            v.push_back({trips[i][2], -trips[i][0]});
        }
        int s=0;
        sort(v.begin(), v.end());
        for(int i=0; i<v.size(); i++){
            s= s+ v[i][1];
            if(s> capacity){
                return false;
            }
        }
        return true;
    }
};