#include<bits/stdc++.h>
using namespace std;

class tree{
    private:
        int data;
        tree *lc,*rc;
    public:
        tree(int data){
            this->data=data;
            this->lc = this->rc =NULL;
        }

        tree *insert(int data,tree *root){
            if(root == NULL){
                return new tree(data);
            }
            if(data < root->data){
                root->lc = insert(data,root->lc);
            }
            if(data > root->data){
                root->rc = insert(data,root->rc);
            }
            return root;
        }

        int max_hight(tree *root){
            if(!root){
                return 0;
            }
            int left = max_hight(root->lc);
            int right = max_hight(root->rc);
            return max(left,right) + 1;
        }
};

int main(){
    tree *root = NULL;
    root = root -> insert(7,root);
    root = root -> insert(2,root);
    root = root -> insert(8,root);
    root = root -> insert(1,root);
    root = root -> insert(5,root);
    root = root -> insert(9,root);
    cout<<root ->max_hight(root);
    cout<<"\n";
}
