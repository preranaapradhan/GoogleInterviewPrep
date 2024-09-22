#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
        int data;
        node* left = NULL;
        node* right = NULL;

    node(int d){
        this -> data = data;
        this -> left = left;
        this -> right = right;
    }
};

node* buildTree(node* root){
    cout<<"ENTER THE DATA: "<<endl;
    int data;
    cin>>data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter the data to be entered in left: "<< root ->data<<endl;
    root -> left = buildTree(root->left);
    cout<<"Enter the data to be entered in right: "<<root->data<<endl;
    root->right = buildTree(root -> right);
    return root;

}

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<< temp -> data << endl;
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void levelorder(node* root){

}

int main(){
    node* root = NULL;

    root = buildTree(root);
    
    cout<<"Printing Level Order Traversal: "<<endl;
    levelOrderTraversal(root);
    
    cout<<"Preorder Traversal is: ";
    preorder(root);
    return 0;
}