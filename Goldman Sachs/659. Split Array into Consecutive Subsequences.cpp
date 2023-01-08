#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int ,int>freq,m;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }

    for(auto i: nums){
        if(freq[i]==0)
            continue;
        
        if(m[i]>0){
            freq[i]--;
            m[i]--;

            m[i+1]++;
        }

        else if(freq[i] != 0 && freq[i+1] != 0 && freq[i+2]!=0){
            freq[i]--;
            freq[i+1]--;
            freq[i+2]--;

            m[i+3]++;
        }
        else
            return false;
    }
    return true;
    }
};