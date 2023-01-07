#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int,int>mp;
        int flag=0,dist=INT_MAX;

        for(int i=0;i<cards.size();i++){
            if(mp.count(cards[i])){
                dist=min(dist , i-mp[cards[i]]+1);
                flag++;
            }
            mp[cards[i]]=i;
        }
        if(flag==0)
            return -1;
        else
            return dist;
    }
};