#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isRectangleCover(vector<vector<int>>& rectangles) {
        map<pair<int,int>,int>mp;
        int ans=0;

        for(auto r:rectangles){
            mp[{r[0],r[1]}]++;
            mp[{r[0],r[3]}]--;
            mp[{r[2],r[1]}]--;
            mp[{r[2],r[3]}]++;
        }

        for(auto i=mp.begin();i!=mp.end();i++){
            if(i->second!=0){
                if((abs(i->second))!=1)
                    return false;
                ans++;
            }
        }
        return ans==4;
    }
};