#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findIntegers(int n) {
        int f[31];
        f[0]=1;
        f[1]=2;
        for(int i=2;i<31;i++){
            f[i]=f[i-1]+f[i-2];
        }
        int ans=0,k=30,prev_bit=0;

        while(k>=0){
            if(n&(1<<k)){
            ans+=f[k];
            if(prev_bit)
                return ans;
            prev_bit=1;
            }
            else
                prev_bit=0;
            --k;
        }
        return ans+1;
    }
};