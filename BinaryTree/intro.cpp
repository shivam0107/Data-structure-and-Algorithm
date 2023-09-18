/*
creation of binary tree

*/

#include <bits/stdc++.h>
using namespace std;
    
 class node{
        public:

        int data;
        node* left;
        node *right;


        node(int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};

node* buildTree(node *root){

    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    // root node
    root = new node(data);
    if(data == -1){
            return NULL;
    }

    //inserting in left node
    cout << "enter data for inserting in left of " <<data<< endl;
    root->left = buildTree(root->left);

    //inserting in right node
    cout << "enter data for inserting in right of " <<data<< endl;
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTravercel(node* root){
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
            node *temp = q.front();


            q.pop();

            if(temp == NULL){ // purana level complete traverse ho chuka

                cout << endl;
                if(!q.empty()){// queue still have element
                    q.push(NULL);
                }
            }
            else{
                cout << temp->data << " ";

                if (temp->left)
                {
                    q.push(temp->left);
                }

                if (temp->right)
                {
                    q.push(temp->right);
                }
            }

            
     }

}

void inorder(node* root){
    // base case

    if(root == NULL){
            return;
    }

    inorder(root->left);
    cout << root->data << " ";

    inorder(root->right);
}

void preOrder(node *root)
{
    // base case

    if (root == NULL)
    {
            return;
    }

    cout << root->data << " ";

    preOrder(root->left);

    preOrder(root->right);
}

void postOrder(node *root)
{
    // base case
    if (root == NULL)
    {
            return;
    }

    postOrder(root->left);

    postOrder(root->right);

    cout << root->data << " ";
}

void iterativePostOrder(node *root)
{
    // base case
    // if (root == NULL)
    // {
    //         return;
    // }

    // postOrder(root->left);

    // postOrder(root->right);

    // cout << root->data << " ";

    
}

void buildFromLevelOrder(node* &root){

    queue<node *> q;
    cout << "enter data for root " << endl;
    int data;
    cin >> data;
    root = new node(data);

    q.push(root);

    while(!q.empty()){
            node *temp = q.front();
            q.pop();

            cout << "enter left node for: " << temp->data << endl;
            int leftData;
            cin >> leftData;

            if(leftData != -1){
                temp->left = new node(leftData);
                q.push(temp->left);
            }

            cout << "enter right node for: " << temp->data << endl;
            int rightData;
            cin >> rightData;

            if (rightData != -1)
            {
                temp->right = new node(rightData);
                q.push(temp->right);
            }
    }
}

int main()
{
        node *root = NULL;

        // root = buildTree(root);

    //  1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
        // cout << "printing the level order traversal " << endl;
        // levelOrderTravercel(root);

        // cout << "inorder traversal " << endl;
        // inorder(root);
        // cout << endl;

        // cout << "preOrder traversal " << endl;
        // preOrder(root);
        // cout << endl;

        // cout << "postOrder traversal " << endl;
        // postOrder(root);

        //1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
        buildFromLevelOrder(root);
        levelOrderTravercel(root);

        return 0;
}











a
ab
abc
abcd
abcdb
abcdbb
abcdbbf
abcdbbfc
abcdbbfcb
b
bc
bcd
bcdb
bcdbb
bcdbbf
bcdbbfc
bcdbbfcb
bcdbbfcba
cd
cdb
cdbb
cdbbf
cdbbfc
cdbbfcb
cdbbfcba
cdbbfcba
dbb
dbbf
dbbfc
dbbfcb
dbbfcba
dbbfcba
dbbfcba
bbfc
bbfcb
bbfcba
bbfcba
bbfcba
bbfcba
bfcba
bfcba
bfcba
bfcba
bfcba
fcba
fcba
fcba
fcba
cba
cba
cba
ba
ba
a