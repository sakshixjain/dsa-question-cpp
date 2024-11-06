#include <iostream>
#include<queue>
#include<vector>
#include<map>
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

node* buildTree(){
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    node* root = new node(data);

    if(data == -1){
        return NULL;
    }
    cout<<"Enter the data for inserting in left of "<<data<<endl;
    root->left= buildTree();
    cout<<"Enter the data for inserting in  right of "<<data<<endl;
    root->right= buildTree();
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

int height(node* root){
    if(root ==NULL){
        return 0;
    }

    int leftHeight= height(root->left);
    int rightHeight= height(root->right);
    int ans= max(leftHeight, rightHeight)+1;

    return ans;
}

void printTopView(node* root){
    if(root == NULL) return ;

    map<int,int>topNode;
    queue<pair<node*, int>>q;
    q.push(make_pair(root,0));
 
 while(!q.empty()){
    pair<node*, int>temp= q.front();
    q.pop();

    node* frontNode= temp.first;
    int hd= temp.second;

    //jo bhi horizontal distance aaya h
    // check if ans for that hd already exists 
    //or not

    if(topNode.find(hd) == topNode.end()){

        // create entry
        topNode[hd]= frontNode->data;
    }
  
    if(frontNode->left){
        q.push(make_pair(frontNode->left,hd-1));

    }

    if(frontNode->right){
        q.push(make_pair(frontNode->right, hd+1));
    }

    // ans store krna h
    cout<<"print the answer"<<endl;

    for(auto i: topNode){
        cout<<i.first<<" -> "<<i.second<<endl;
    }
 }
}

void printBottomView(node* root){
    if(root == NULL) return ;

    map<int,int>topNode;
    queue<pair<node*, int>>q;
    q.push(make_pair(root,0));
 
 while(!q.empty()){
    pair<node*, int>temp= q.front();
    q.pop();

    node* frontNode= temp.first;
    int hd= temp.second;

        // create entry
        topNode[hd]= frontNode->data;
    
  
    if(frontNode->left){
        q.push(make_pair(frontNode->left,hd-1));

    }

    if(frontNode->right){
        q.push(make_pair(frontNode->right, hd+1));
    }

    // ans store krna h
    cout<<"print the answer"<<endl;

    for(auto i: topNode){
        cout<<i.first<<" -> "<<i.second<<endl;
    }
 }
}

void printLeftView(node* root, vector<int>&ans, int level){
    //base case

    if(root==NULL) return ;

    if(level == ans.size()){
        ans.push_back(root->data);
    }

    //left 
    printLeftView(root->left, ans,  level+1);
    //right
    printLeftView(root->right, ans, level+1);
}

void printRightView(node* root, vector<int>&ans, int level){
    //base case

    if(root==NULL) return ;

    if(level == ans.size()){
        ans.push_back(root->data);
    }

 //right
    printRightView(root->right, ans, level+1);
    //left 
    printRightView(root->left, ans,  level+1);
   
}

void printLeftBoundary(node* root){
    //base case
    if(root== NULL) return ;

    if(root->left==NULL && root->right==NULL) return ;

    cout<<root->data<<" ";

    if(root->left){
     printLeftBoundary(root->left);    
    }
   else{
    printLeftBoundary(root->right);
   }
}

void printLeafBoundary(node* root){
    if(root==NULL) return ;
    if(root->left==NULL && root->right==NULL){
        cout<<root->data<<" ";
    }
    printLeafBoundary(root->left);
    printLeafBoundary(root->right);
}

void printRightBoundary(node* root){
    if(root==NULL) return ;

    if(root->left==NULL && root->right==NULL) return ;

if(root->right){
  printRightBoundary(root->right);   
}
else{  
    printRightBoundary(root->left);
}
    cout<<root->data<<" ";
}

void boundaryTraversal(node* root){
    if(root== NULL) return ;

     cout<<root->data<<" ";
    //A
    printLeftBoundary(root->left);

    //b
    printLeafBoundary(root);
    //c
    printRightBoundary(root->right);
}

int main(){

node* root=buildTree();
// printTopView(root);
// printBottomView(root);
// vector<int>ans;
// int level=0;
// printLeftView(root, ans,level);
// printRightView(root, ans,level);

// cout<<"printing the left view: "<<endl;
// for(auto i:ans){
//     cout<<i<<" ";
// }
boundaryTraversal(root);
// 10 20 30 -1 -1 50 70 90 -1 -1 80 -1 -1 60 -1 -1 40 -1 100 -1 120 110 -1 -1 130 -1 -1

}