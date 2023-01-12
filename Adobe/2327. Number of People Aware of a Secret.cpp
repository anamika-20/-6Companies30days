#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int peopleAwareOfSecret(int n, int d, int f) {
        vector<int>v(2001,0);
        v[1]=1;
        int mod=pow(10,9)+7;

        for(int i=1;i<n;i++){
            for(int j=i+d;j<i+f;j++){
                v[j]=(v[j]+v[i])%mod;
            }
        }
            int i=0;
            int ans=0;

            while(f--){
                ans=(ans+v[n-i])%mod;
                i++;
            }
            return ans; 
    }
};