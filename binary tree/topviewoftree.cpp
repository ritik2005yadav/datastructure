#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
            }
};

class solution{
   
    public:
    vector<int>topview(Node* root){
vector<int>ans;
if(root==NULL){
    return ans;
}
map<int,int>topNode;
queue<pair<Node*,int > >q;
q.push(make_pair(root,0));
while(!q.empty()){
    pair<Node*, int> temp=q.front();
}

    }
};

