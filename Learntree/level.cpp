#include<bits/stdc++.h>
using namespace std;

class tree{
    private:
        int data;
        tree *lc,*rc;
    public:

        tree(int data){
            this -> data = data;
            this -> lc = this -> rc = NULL;
        }

        tree *insert(int data,tree *root){
            if(root == NULL) {
                return new tree(data);
            }
            if(data < root -> data){
                root -> lc = insert(data,root -> lc);
            }
            if(data > root -> data){
                root -> rc = insert(data,root -> rc);
            }
            return root;
        }

        void levels_order_travarsal(tree *root){
            queue<tree *> q;
            q.push(root);
            while(!q.empty()){
                auto temp = q.front();
                q.pop();
                cout<<temp -> data<<" ";
                if(temp -> lc){
                    q.push(temp -> lc);
                }
                if(temp -> rc){
                    q.push(temp -> rc);
                }
            }
        }

};

int main(){
    tree *root = NULL;
    root = root -> insert(7,root);
    root = root -> insert(5,root);
    root = root -> insert(8,root);
    root = root -> insert(4,root);
    root = root -> insert(6,root);
    root = root -> insert(9,root);
    root ->levels_order_travarsal(root);
    cout<<"\n";

}