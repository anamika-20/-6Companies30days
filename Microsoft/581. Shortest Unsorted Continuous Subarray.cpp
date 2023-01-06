#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>v=nums;
        sort(v.begin(),v.end());
        int r=0, l=nums.size(),ans=0;
        for(int i=0;i<nums.size();i++){
                if(v[i] != nums[i]){
                    l=min(l,i);
                    r=max(r,i);
                }
        }
        ans=r-l;
        if(ans<0)
            return 0;
        else
            return ans+1;
    }
};