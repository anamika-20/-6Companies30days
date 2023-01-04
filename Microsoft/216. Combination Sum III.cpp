#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void comb(int ind,int sum,int n,vector<vector<int>>& ans,vector<int>& ans1,int k){
        if(sum==n && k==0){
            ans.push_back(ans1);
            return;
        }

        if(sum>n)
            return;

        for(int i=ind;i<=9;i++){
            if(i>n){
                break;
            }
            ans1.push_back(i);
            comb(i+1,sum+i,n,ans,ans1,k-1);
            ans1.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n){
        vector<vector<int>>ans;
        vector<int>ans1;
        comb(1,0,n,ans,ans1,k);
        return ans;
    }
};