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

        void right_view(tree *root){
            queue<tree *> q;
            q.push(root);
            while(!q.empty()){
                int sz = q.size();
                for(int i=1; i<=sz; i++){
                    auto temp = q.front();
                    q.pop();
                    if(i == sz){
                        cout<<temp -> data<<" ";
                    }
                    if(temp -> lc){
                        q.push(temp -> lc);
                    }
                    if(temp -> rc){
                        q.push(temp -> rc);
                    }
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
    root ->right_view(root);
    cout<<"\n";

}