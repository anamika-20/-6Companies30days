#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& p) {
        int n=p.size();
        int total=0;
        for(int i=0;i<n;i++){
            map<int,int>mp;
            for(int j=0;j<n;j++){
                int dist=((p[i][0]-p[j][0])*(p[i][0]-p[j][0]))+((p[i][1]-p[j][1])*(p[i][1]-p[j][1]));
                mp[dist]++;
            }
            for(auto i : mp){
                if(i.second)
                    total+=(i.second)*((i.second)-1);
            }
        }
        return total;
    }
};