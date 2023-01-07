#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

int len(vector<int>& a, vector<int>& b){
    return(a[0]-b[0])*(a[0]-b[0]) + (a[1]-b[1])*(a[1]-b[1]);
}

bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {

        set<int>s={
            len(p1,p2),
            len(p1,p3),
            len(p1,p4),
            len(p2,p3),
            len(p2,p4),
            len(p3,p4),
        };

        if(!s.count(0) && s.size()==2)
            return true;
        else
            return false;
    }
};