#include <iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

node(int d){
    this->data=d;
    this->left= NULL;
    this->right= NULL;
}
};

node* buildTree(node* root){
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }
    cout<<"Enter the data for inserting in left of "<<data<<endl;
    root->left= buildTree(root->left);
    cout<<"Enter the data for inserting in  right of "<<data<<endl;
    root->right= buildTree(root->right);
    return  root;
}

void levelOrderTraversal(node* root){
    queue<node*>q; 
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
         node* temp= q.front();
         q.pop();
         if(temp==NULL){
         cout<<endl;
         if(!q.empty()){
            q.push(NULL);
         }
         }

else{
      cout<<temp->data<<" ";  
       if(temp->left){
           
            q.push(temp->left); 
         }
          if(temp->right){
            q.push(temp->right ); 
         }
}
       
    }
}

void inorder(node* root){
    //base case
    if(root == NULL){
        return ;
    }

    //left
    inorder(root->left);
    //print node
    cout<<root->data<<" ";
    //right
    inorder(root->right);
}

void preOrder(node* root){
    //base case
    if(root == NULL){
        return;
    }
    //print node
    cout<<root->data<<" ";
    //left
    preOrder(root->left);
    //right
    preOrder(root->right);
}

void postOrder(node* root){
    if(root== NULL)return;
    
    //left
    postOrder(root->left);
    //right
    postOrder(root->right);
    //print node
    cout<<root->data<<" ";
}

void buildFromLevelOrder(node* &root){
    queue<node*>q;
    cout<<"Enter the data for root"<<endl;
    int data;
    cin>>data;
    root= new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp =q.front();
        q.pop();

        cout<<"Enter the left node for : "<<temp->data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData != -1){
            temp->left= new node(leftData);
            q.push(temp->left);
        }

     cout<<"Enter the right node for : "<<temp->data<<endl;
        int rightData;
        cin>>rightData;

        if(rightData != -1){
            temp->right= new node(rightData);
            q.push(temp->right);
        }
    }
}

int main(){

node* root= NULL;
// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
//creating a tree;
// root = buildTree(root);

buildFromLevelOrder(root);
cout<<"Printing the level of order traversal output"<<endl;
levelOrderTraversal(root);

// cout<<"inorder Traversal : ";
// inorder(root);
// cout<<endl;
// cout<<"preOrder Traversal : ";
// preOrder(root);
// cout<<endl;
// cout<<"Postorder Traversal : ";
// postOrder(root);

}