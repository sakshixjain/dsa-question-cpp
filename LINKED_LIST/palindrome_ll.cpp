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
};

node* reversell(node* head){
  node* prev= NULL;
  node* curr= head;
  node* temp= curr->next;

  while(curr!=NULL){
    temp= curr->next;
    curr->next= prev;
    prev= curr;
    curr=temp;
  }
  return prev;
}

bool checkPalindrome(node* &head){
  if(head==NULL){
    cout<<" LL is empty"<<endl;
    return false;
  }
  if(head->next==NULL){
    return true;
  }

  node* slow=head;
  node* fast= head->next;
  while(fast!=NULL){
    fast= fast->next;
    if(fast!=NULL){
      fast=fast->next;
      slow= slow->next;
    }
  }
  node* reverseLLhead= reversell(slow->next);

slow->next= reverseLLhead;

node* temp1= head;
node* temp2= reverseLLhead;

while(temp2!=NULL){
  if(temp1->data!= temp2->data){
return false;
  }
  else{
    temp1=temp1->next;
    temp2= temp2->next;
  }
  
}
return true;

}

int main() {
node* head= new node(10);
node* second= new node(20);
node* third= new node(30);
node* fourth= new node(20);
node* fifth= new node(20);
node* sixth= new node(10);

head->next= second;
second->next= third;
third->next= fourth;
fourth->next= fifth;
fifth->next= sixth;

bool palindorme= checkPalindrome(head);

if(palindorme){
  cout<<"LL is a palindrome "<<endl;
}
else{
  cout<<" LL is not a palindrome"<<endl;
}
  return 0;
}