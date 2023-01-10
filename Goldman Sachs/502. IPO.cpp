#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& p, vector<int>& c) {
        vector<pair<int,int>>v;
        priority_queue<int> q;
        int n=p.size();

        for(int i=0;i<n;i++){
            v.push_back({c[i],p[i]});
        }
        sort(v.begin(),v.end());
        int i=0;

        while(i<v.size() && k){
            if(w>=v[i].first )
            {
                q.push(v[i].second);
                i++;
            }
            else{
                if(q.empty())
                    return w;
                    
                else{
                    w+=q.top();
                    q.pop();
                    k--;
                }
            }
        }

        while(k-- && !(q.empty())){
            w+=q.top();
            q.pop();
        }
        return w;
    }
};