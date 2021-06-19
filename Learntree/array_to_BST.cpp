#include<bits/stdc++.h>
using namespace std;

class tree{
    private:
        int data;
        tree *lc,*rc;
    public:
        tree(int data){
            this->data = data;
            this->lc = this->rc = NULL;
        }
        tree *array_to_BST(vector<int> &v,int st,int end){
            if(st > end){
                return NULL;
            }
            int mid = (st + end) >> 1;
            tree *root = new tree(v[mid]);
            root->lc = array_to_BST(v,st,mid-1);
            root->rc = array_to_BST(v,mid+1,end);
            return root;
        }
        
        void inorderd(tree *root){
            if(!root){
                return;
            }
            inorderd(root->lc);
            cout<<root->data<<" ";
            inorderd(root->rc);
        }
    
};

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &x: v) cin>>x;
    tree *root = root->array_to_BST(v,0,n-1);
    root->inorderd(root);
    
}