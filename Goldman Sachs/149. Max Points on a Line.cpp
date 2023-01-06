#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxPoints(vector<vector<int>>& p) {
        int n=p.size();
        if(n<=2)
            return n;
        int maxi=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int x1 =p[i][0];
                int x2 = p[j][0];
                int y1 = p[i][1];
                int y2 = p[j][1];  
                int total=2;
                for(int k=0;k<n;k++){
                    if(k!=i && k!=j){
                        int x=p[k][0];
                        int y=p[k][1];
                        if((y2 - y1)*(x - x1) == (x2 - x1)*(y - y1))
                        total++;
                    }
                    maxi=max(maxi,total);
                }
            }
        }
        return maxi;
    }
};