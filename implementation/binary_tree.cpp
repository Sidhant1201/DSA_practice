#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node *right;
    Node *left;
    int data;
    Node(int d)
    {
        this->data = d;
        this->right = NULL;
        this->left = NULL;
    }
};

Node* push_to_tree(Node* root, int d)
{
    if(root == NULL){
        root= new Node(d);
        return root;
    }
    if(d> root->data){
        root->right =push_to_tree(root->right, d);
    }
    else
        root->left = push_to_tree(root->left, d);
    
    return root;
}

void create_tree(Node *&root)
{
    int d;
    cout<< "enter data:";
    cin >> d;
    while (d != -1)
    {
        root = push_to_tree(root, d);
        cout<< "enter data: ";
        cin >> d;
    }
}

void traversal_by_level(Node *root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        if(temp== NULL){
            cout<< endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<< temp->data<<" ";

            if(temp->left){
                q.push(temp->left);
    
            }
            if(temp->right){
                q.push(temp->right);
            }

        }
        
    }
}

int main()
{
    Node *root;
    create_tree(root);
    traversal_by_level(root);
}