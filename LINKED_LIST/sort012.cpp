#include <iostream>
using namespace std;

class node{
    public:
  int data;
  node* next;

  node(){
    this->data=0;
    this->next=NULL;
  }
  node(int data){
     this->data=data;
    this->next=NULL;
  }

  //WRITE A DESTRUCTIOR TO DELETE A NODE
 ~node(){
  cout<<" node deleted"<<endl;
 }

};

void print(node* &head){

    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
}

node* sort2(node* head){
  //three dummy nodes for 0,1,2
  node* zeroHead= new node(-1);
  node* zeroTail= zeroHead;

    node* oneHead= new node(-1);
  node* oneTail= oneHead;

    node* twoHead= new node(-1);
  node* twoTail= twoHead;

  node* curr= head;
  while(curr!=NULL){
    if(curr->data==0){
      //zero wali node laani h
        node* temp= curr;
        curr=curr->next;
        temp->next= NULL;

        // append the zerohead in ll
        zeroTail->next= temp;
        zeroTail=temp;
    }
    else if(curr->data==1){
          //zero wali node laani h
        node* temp= curr;
        curr=curr->next;
        temp->next= NULL;

        // append the zerohead in ll
        oneTail->next= temp;
        oneTail=temp;
    }
    else if(curr->data==2){
         //zero wali node laani h
        node* temp= curr;
        curr=curr->next;
        temp->next= NULL;

        // append the zerohead in ll
        twoTail->next= temp;
        twoTail=temp;
    }
  }

  //yaha tk,,,,teeno dummy node ready h 

  //join them
  //remove dummy nodes

   node* temp =oneHead;
  oneHead=oneHead->next;
  temp->next= NULL;
  delete temp;

  
  temp =twoHead;
  twoHead=twoHead->next;
  temp->next= NULL;
  delete temp;
  //modify one wali list

  // join 3 ll

  if(oneHead!=NULL){
    zeroTail->next=oneHead;
    if(twoHead!=NULL){
      oneTail->next= twoHead;
    }
  }
  else{
    if(twoHead!=NULL){
      zeroTail->next=twoHead;
    }
  }
  temp= zeroHead;
  zeroHead= zeroHead->next;
  temp->next= NULL;
  delete temp;

  return zeroHead; 
}

int main(){
  
    node* first= new node(2);
    node* second= new node(2);
    node* third= new node(2);
    node* fourth= new node(2);
    node* fifth= new node(2);
    node* sixth= new node(2);


    first->next=second;
    second->next=third;
    third->next= fourth;
    fourth->next= fifth;
    fifth->next=sixth;
    sixth->next= NULL;

      print(first);
      cout<<endl;
   cout<<"print sort ll"<<endl;
first= sort2(first);

print(first);
    return  0;
}