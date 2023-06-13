#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* buildtree(Node* root){
    cout<<"enter the root data"<<endl;
    int data;
    cin>>data;
    root=new Node(data);
    if(data==-1){
        return NULL;

    }
    cout<<"enter the data for left root"<<endl;
    root->left=buildtree(root->left);

      cout<<"enter the data for right root"<<endl;
    root->right=buildtree(root->right);
    return root;
    
}
void traversal(Node* root){
    if(root==NULL){
        return ;

    }
    traversal(root->left);
    cout<<root->data;
    traversal(root->right);
}
int main(){
Node* root=NULL;
root=buildtree(root);
traversal( root);

}