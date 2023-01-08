#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSubstrings(string s) {
        int i=0, j=0,count=0;
        vector<int>v(3,0);

        for(int j=0;j<s.size();j++){
            v[s[j]-'a']++;

            while(v[0] && v[1] && v[2]){
                count+= s.size() - j;
                v[s[i]-'a']--;
                i++;
            }
        }
        return count;
    }
};