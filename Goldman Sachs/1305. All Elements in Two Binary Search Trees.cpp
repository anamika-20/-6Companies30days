#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
  */
  struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:

    void inorder(TreeNode* root,vector<int>& t){
        if(root==NULL)
            return;

        inorder(root->left,t);
        t.push_back(root->val);
        inorder(root->right,t);
    }

    vector<int> merge(vector<int>& t1,vector<int>& t2){
        int i=0,j=0,k=0;
        vector<int>m(t1.size() + t2.size());
        while(i<t1.size() && j<t2.size()){
            if(t1[i]< t2[j])
                m[k++]=t1[i++];
            else
                m[k++]=t2[j++]; 
        }

        while(i<t1.size()){
            m[k++]=t1[i++];
        }

        while(j<t2.size()){
            m[k++]=t2[j++];
        }
        return m;
    }

    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>tree1,tree2;
        inorder(root1,tree1);
        inorder(root2,tree2);

        vector<int>merged=merge(tree1,tree2);
        return merged;
    }
};