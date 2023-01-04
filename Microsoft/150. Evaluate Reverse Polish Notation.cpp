#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& t) {
        stack<int>st;

        for(auto i : t){ 
            if(i == "+"){
                int x= st.top();
                st.pop();
                int y= st.top();
                st.pop();
                st.push(x+y);
            }

            else if(i=="-"){
                 int a=st.top();
                 st.pop();
                 int b=st.top();
                 st.pop();
                 st.push(b-a);
            }
            else if(i=="*"){
                int x= st.top();
                st.pop();
                int y= st.top();
                st.pop();
                st.push(x*y);
            }
            
            else if(i=="/"){
                int a=st.top();
                 st.pop();
                 int b=st.top();
                 st.pop();
                 st.push((b/a));
            }

            else{
                int a=stoi(i);
                st.push(a);
            }
        }
        return st.top();
    }
};