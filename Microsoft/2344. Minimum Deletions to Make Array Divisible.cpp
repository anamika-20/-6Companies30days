#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsD) {
        sort(nums.begin(),nums.end());
        sort(numsD.begin(),numsD.end());


        int gcd=numsD[0], count=0;

        for(int i=1;i<numsD.size();i++){
            gcd=__gcd(gcd,numsD[i]);
        }

        if(nums[0]>gcd)
            return -1;

        for(int i=0;i<nums.size();i++){
            if(gcd%nums[i] == 0)
                return count;
            count++;
        }
        return -1;
    }
};