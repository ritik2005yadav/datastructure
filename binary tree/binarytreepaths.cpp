#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
            }
};


class Solution {
public:
vector<string>v;
    
    void solve(TreeNode* root,string s){
        if(!root){
            if(s!="")
            return;
            else
            v.push_back(s);
            return;
        }

        s=s+to_string(root->val)+"->";
        if(!root->left and !root->right){
            s=s.substr(0,s.size()-2);
            v.push_back(s);
        }
        if(root->left)
        solve(root->left,s);
        if(root->right)
        solve(root->right,s);
        
       
        
}

    vector<string> binaryTreePaths(TreeNode* root) {
        string s="";
        solve(root,s);
        return v;
        
    }
};