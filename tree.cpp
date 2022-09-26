#include<iostream>
#include<queue>
using namespace std;
struct Node{
    int val;
    Node* left;
    Node* right;
};

// same as the level order traversal but we have to only print the right most value of any level
void rightview(Node* root){
    if(root==NULL){
        return;
    }
    queue<int> q;
    q.push(root);
    int n=q.size();
    for(int i=0;i<n;i++){
        Node* cu=q.front();
        q.pop();
        if(i==n-1){
            cout<<cu->val<<" ";
        }
        if(root->left!=NULL){
            q.push(cu->left);
        }
        if(root->right!=NULL){
            q.push(cu->right);
        }
    }

}

bool isbalanced(Node* root,int* height){
    if(root==NULL)
        return true;
    
    int l=0;
    int r=0;
    if(isbalanced(root->left,&l)==false)
        return false;
    if(isbalanced(root->right,&r)==false)
        return false;

    *height=max(l,r)+1;
    if(abs(l-r)<=1)
    return true;
    else
    return false;
}

int main()
{
    return 0;
}