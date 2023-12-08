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

Node push_to_tree(int d)
{
}

void create_tree(Node *&root)
{
    int d;
    cin >> d;
    while (d != -1)
    {
        push_to_tree(d);
        cin >> d;
    }
}

int main()
{
    Node *root;
    create_tree(root);
    cout << "Kings";
}