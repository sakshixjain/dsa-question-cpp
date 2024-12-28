#include <iostream>
#include<queue>
#include<vector>
using namespace std;

class node{
  public:
  int data;
  int row;
  int col;

node(int val,int r, int c){
  data= val;
  row=r;
  col=c;
}

};

class compare{
  public:
  bool operator()(node* a, node* b){
    return a->data > b->data;
  }
};

vector<int>mergeKSortedArray(int arr[][4], int k, int n){
priority_queue<node*, vector<node*>, compare>minHeap;

//har array ka first element insert kro

for(int i=0; i<k; i++){
  node* temp= new node(arr[i][0], i,0);
  minHeap.push(temp);
}

vector<int>ans;
while(!minHeap.empty()){
  node* temp= minHeap.top();
  int topElement= temp->data;
  int topRow= temp->row;
  int topCol= temp->col;
  minHeap.pop();

  ans.push_back(topElement);

  if(topCol +1 <n){
    node* newInfo= new node(arr[topRow][topCol+1], topRow, topCol+1);

    minHeap.push(newInfo);
  }
}
return ans;
}
int main() {
  int arr[][4]= {{2,4,6,8}, {1,3,5,7}, {0,9,10,11}};
  int k=3;
  int n=4;
  vector<int>ans= mergeKSortedArray(arr,k,n);
  for(auto i: ans){
    cout<<i<<" ";
  }
  cout<<endl;
  return 0;
}