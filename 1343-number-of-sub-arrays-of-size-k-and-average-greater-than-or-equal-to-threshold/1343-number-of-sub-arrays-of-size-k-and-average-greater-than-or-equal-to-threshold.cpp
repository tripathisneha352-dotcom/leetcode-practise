class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int i=0, j=0, s=0, c=0;
        int n= arr.size();
        while(j<k){
            s= s+arr[j];
            j++;
        }
        if(s>= (threshold*k)){
            c++;
        }

        while(j<n){
            s= s-arr[i];
            i++;
            s= s+arr[j];
            j++;
            if(s>= (threshold*k)){
                c++;
            }
        }
        return c;
    }
};