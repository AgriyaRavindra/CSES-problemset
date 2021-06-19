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

        void bottom_view(tree *root){
           map<int,int> mp;
            queue<pair<tree *,int>> q;
            q.push({root,0});
            while(!q.empty()){
                auto temp = q.front();
                q.pop();
                auto node = temp.first;
                int hd = temp.second;
                mp[hd] = node -> data;
                if(node -> lc){
                    q.push({node -> lc,hd - 1});
                }
                if(node -> rc){
                    q.push({node -> rc,hd + 1});
                }
            }
            for(auto x: mp){
                cout<<x.second<<" ";
            }
            cout<<"\n";

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
    root ->bottom_view(root);
    cout<<"\n";
}
