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

node* findNodeInBST(node* root, int target){
  if(root==NULL) return NULL;

  if(root->data ==target) return root;

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


node* deleteNodeInBST(node* root, int target){
  cout<<" request for deleting target "<<target<<endl;
  if(root== NULL) return NULL;

  //stemp 1
  // node* temp= root;

  //i want to delete temp
if(root->data== target){

  if(root->left ==NULL && root->right ==NULL){
    //leaf node
    delete root;
    return NULL;
  }
  else if(root->left ==NULL && root->right !=NULL){
    
    node* child= root->right;

    delete root;
    return child;
  }
  else if(root->left !=NULL && root->right ==NULL){
    node* child= root->left;
    delete root;
    return child;
  }
  else{
    //dono child exits krte h
    // inorder predeccessor of left subtree

    int inorderPre = maxVal(root->left);

    root->data= inorderPre;

  root->left=  deleteNodeInBST(root->left, inorderPre);
    return root;
  }
}
else if(target > root->data){
  root->right= deleteNodeInBST(root->right, target);
}
else if(target< root->data){
  root->left= deleteNodeInBST(root->left, target);
}
return root;
}

node* inorderBST(int inorder[], int s, int e){
  if(s>e) return NULL;

  int m= (e+s)/2;
  node* root= new node(inorder[m]);
  root->left= inorderBST(inorder,s,m-1);
  root->right= inorderBST(inorder,m+1,e);
  return root;
}

void convertedIntoDLL(node* root, node*& head){
  if(root ==NULL) return;

  //right subtree convert into DLL
convertedIntoDLL(root->right, head);

//atach root node r
root->right= head;

if(head != NULL){
  head->left= root;
}
//update head
head= root;

//left subtree

convertedIntoDLL(root->left, head);

}


void printLinkedList(node* head){
  node* temp= head;
  cout<<endl;
  while(temp != NULL){
    cout<<temp->data<<" ";
    temp=temp->right;
  }
  cout<<endl;
}


node* sortedLLIntoBST(node*&head,int n){
  //base case
  if(n<=0 || head==NULL) return NULL;

node* left = sortedLLIntoBST(head, n-1-n/2);

node* root= head;

root->left= left;

head= head->right;

//right side solve

root->right= sortedLLIntoBST(head, n/2);

return root;
}
int main() {
int inorder[]= {1,2,3,4,5,6,7,8,9};
int s=0;
int e= 8;

node* root= inorderBST(inorder,s,e);
levelOrderTraversal(root);
// cout<<"enter the data for the node "<<endl;
// takeInput(root);
// cout<<"Printing the level of order traversal output"<<endl;
// levelOrderTraversal(root);
// cout<<endl;
// cout<<"print preorder"<<endl;
// preOrderTraversal(root);
// cout<<endl;
// cout<<"print inorder"<<endl;
// inOrderTraversal(root);
// cout<<endl;
// cout<<"print postorder"<<endl;
// postOrderTraversal(root);
//  cout<<endl;

//  bool ans =findNodeInBST(root, 150);
//  cout<<" present or not "<<ans<<endl;

//  cout<<endl<< "minimum value :"<<minVal(root)<<endl;
//  cout<<endl<< "maximum value :"<<maxVal(root)<<endl;

//  deleteNodeInBST(root, 100);
//  levelOrderTraversal(root);
cout<<"printing sorted DLL "<<endl;
node* head= NULL;

convertedIntoDLL(root,head);
printLinkedList(head);
node* root1= NULL;
root1= sortedLLIntoBST(head, 9);
cout<<"doping level order traversal for root 1"<<endl;
levelOrderTraversal(root1);

  return 0;
}