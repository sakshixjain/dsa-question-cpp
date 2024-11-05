#include <iostream>
#include <queue>
using namespace std;

class node{
  public:
  int data;
  node* left;
  node* right;

  node(int data){
    this->data= data;
    this->left= NULL;
    this->right= NULL;
  }

};

int findPosition(int arr[], int n, int element){
  for(int i=0; i<n; i++){
    if(arr[i] ==element){
      return i;
    }
  }
  return -1;
}

//build tree
node* buildTreeFromPreorderInorder(int inorder[], int preorder[],int size, int &preIndex, int inorderStart, int inorderEnd){
//base case

if(preIndex >= size || inorderStart >inorderEnd){
  return NULL;
}

//step A
int element= preorder[preIndex++];
node* root= new node(element);
int pos= findPosition(inorder, size, element);

//step B
root->left= buildTreeFromPreorderInorder(inorder,preorder,size, preIndex,inorderStart,pos-1);

//stepC

root->right= buildTreeFromPreorderInorder(inorder,preorder,size, preIndex,pos+1,inorderEnd);

return root;
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

int main() {
 
 int inorder[]= {40,20,50,10,60,30,70};
 int preorder[]= {10,20,40,50,30,60,70};
 int size=7;
 int preIndex=0;
 int inorderStart=0;
 int inorderEnd=size-1;


cout<<"building tree"<<endl;
node* root= buildTreeFromPreorderInorder(inorder,preorder,size,preIndex,inorderStart,inorderEnd);

cout<<"print levell order traversal"<<endl;

levelOrderTraversal(root);
  return 0;
}