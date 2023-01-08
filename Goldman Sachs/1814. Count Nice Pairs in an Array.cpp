#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int rev(int num){
        int x=0;
        while(num>0){
            x=x*10 + num%10;
            num=num/10;
        }
        return x;
    }
    int countNicePairs(vector<int>& nums) {
        int n=nums.size(),ans=0;
        unordered_map<int,int>mp;
        int M= 1e9 + 7;

        for(int i=n-1;i>=0;i--){
            int d=nums[i]-rev(nums[i]);
            if(mp.count(d)==true)
                {
                    ans=(ans+mp[d])%M;
                }
            mp[d]++;
        }
        return ans;
    }
};