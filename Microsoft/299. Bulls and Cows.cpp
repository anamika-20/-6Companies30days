#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string getHint(string s1, string g1) {
        int b=0,c=0;
        int n=s1.size();
        vector<int>s(10,0);
        vector<int>g(10,0);
        for(int i=0;i<n;i++){
            if(s1[i] == g1[i]){
                b++;
            }
            else{
                s[s1[i]-'0']++;
                g[g1[i]-'0']++;
            }
        }
        for(int i=0;i<10;i++){
            c+=min(s[i],g[i]);
        }

        string ans="";
        ans+=to_string(b);
        ans+='A';
        ans+=to_string(c);
        ans+='B';

        return ans;
    }
};