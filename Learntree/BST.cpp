#include<bits/stdc++.h>
using namespace std;

class tree{
    private:
        int data;
        tree *lc,*rc;
    public:
    
        tree(int data){
            this-> data = data;
            this -> lc = this -> rc = NULL;
        }

        tree *insert(int data,tree *root){
            if(root == NULL){
                return new tree(data);
            }
            if(data > root -> data){
                root -> rc = insert(data,root -> rc);
            }
            if(data < root -> data){
                root -> lc = insert(data,root -> lc);
            }
            return root;
        }

        void inorder(tree *root){
            if(root == NULL)
                return;
            inorder(root -> lc);
            cout<<root -> data<<" ";
            inorder(root -> rc);
        }

        void pre(tree *root){
            if(root == NULL)
                return;
            cout<<root -> data<<" ";
            pre(root -> lc);
            pre(root -> rc);
        }

        void postorder(tree *root){
            if(root == NULL)
                return;
            postorder(root -> lc);
            postorder(root -> rc);
            cout<<root -> data<<" ";
        }

};

int main(){
    tree *root = NULL;
    root = root -> insert(10,root);
    root = root -> insert(6,root);
    root = root -> insert(4,root);
    root = root -> insert(11,root);
    root -> inorder(root);
    cout<<"\n";
    root -> postorder(root);
    cout<<"\n";
    root->pre(root);
    cout<<"\n";
}