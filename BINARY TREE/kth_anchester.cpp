#include <iostream>
using namespace std;

class Node{
    public:
 int data;
 Node* left;
 Node* right;

 Node(int data){
    this->data=data;
    left=NULL;
    right= NULL;
 }
};


    //       1
    //     /   \
    //    2     3
    //   / \
    // 4    5

Node* buildTree(){
    int data;
    cout<<" Enter the data "<<endl;
    cin>>data;

    if(data == -1) return NULL;

    //step A,B,C
    Node* root= new Node(data);

    cout<<"Enter the data fot left part of "<<data<<" node"<<endl;
    root->left= buildTree();
 
    cout<<"Enter the data fot right part of "<<data<<" node"<<endl;
    root->right= buildTree();

    return root;
    
}

bool kthAnchestor (Node* root, int& k, int p){
    //base case
    if(root==NULL) return false;

    if(root->data== p) return true;


 bool leftAns= kthAnchestor(root->left, k,p);
 bool rightAns= kthAnchestor(root->right, k ,p);
 //check left aur right mai ans mila h kya nhi
 if(leftAns || rightAns) k--;

 if(k==0) {
 cout<<"Answer "<<root->data<<endl;
 k=-1;
 }
 return leftAns || rightAns;
}

int main(){

Node* root= NULL;
root= buildTree();
int k=1;
int p=4;
bool found= kthAnchestor(root,k,p);

}