#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trailingZeroes(int n) {
        int f=0;
        while(n>0){
            n/=5;
            f+=n;
        }
        return f;
    }
};