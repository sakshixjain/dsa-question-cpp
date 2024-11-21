#include <iostream>
#include <queue>
using namespace std;

class node{
  public:
  int data;
  node* left;
  node* right;

  node (int data){
    this->data=data;
    this->left=NULL;
    this->right=NULL;
  }
};

node* insertIntoBST(node* root, int data){
  if(root==NULL){
    //this is the first node , we have to cretae
    root= new node(data);
    return root;
  }

  //no the first node
  if(root->data >data){
    root->left = insertIntoBST(root->left, data);
  }
  else{
    root->right= insertIntoBST(root->right, data);
  }
  return root;
}

void takeInput(node* &root){
  int data;
  cin>>data;
  while(data != -1){
    root= insertIntoBST(root,  data);
    cin>>data;
  }
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

void preOrderTraversal(node* root){
  //NLR
  if(root ==NULL) return ;

  cout<<root->data<<" ";
  preOrderTraversal(root->left);
  preOrderTraversal(root->right);
}

void inOrderTraversal(node* root){
  //LNR
  if(root ==NULL) return ;

inOrderTraversal(root->left);
  cout<<root->data<<" ";
  inOrderTraversal(root->right);
}

void postOrderTraversal(node* root){
  //LRN
  if(root ==NULL) return ;

  postOrderTraversal(root->left);
  postOrderTraversal(root->right);
    cout<<root->data<<" ";
}

bool findNodeInBST(node* root, int target){
  if(root==NULL) return false;

  if(root->data ==target) return true;

  if(target>root->data){
    //find in right side
    return findNodeInBST(root->right, target);
  }
  else{
    return findNodeInBST(root->left, target);
  }
}

int minVal(node* root){
  node* temp= root;
  if(temp ==NULL){
    return -1;
  }

  while(temp->left != NULL){
    temp= temp->left;
  }
  return temp->data;
}

int maxVal(node* root){
   node* temp= root;
  if(temp ==NULL){
    return -1;
  }

  while(temp->right != NULL){
    temp= temp->right;
  }
  return temp->data;
}
int main() {
node* root= NULL;
cout<<"enter the data for the node "<<endl;
takeInput(root);
cout<<"Printing the level of order traversal output"<<endl;
levelOrderTraversal(root);
cout<<endl;
cout<<"print preorder"<<endl;
preOrderTraversal(root);
cout<<endl;
cout<<"print inorder"<<endl;
inOrderTraversal(root);
cout<<endl;
cout<<"print postorder"<<endl;
postOrderTraversal(root);
 cout<<endl;

 bool ans =findNodeInBST(root, 153);
 cout<<" present or not "<<ans<<endl;

 cout<<endl<< "minimum value :"<<minVal(root)<<endl;
 cout<<endl<< "maximum value :"<<maxVal(root)<<endl;
  return 0;
}