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

node* reverse(node* &head){
  node* prev= NULL;
  node* curr= head;
  node* temp =curr->next;
  while(curr!=NULL){
    temp= curr->next;
    curr->next= prev;
    prev= curr;
    curr= temp;
  }
  return prev;
}
node* adding(node* &head1, node* &head2){
  //step 1 : reverse the linked list
  head1= reverse(head1);
  head2= reverse(head2);

  //step2: adding the linked list 
  node* ansHead=NULL;
  node* ansTail= NULL;
  int carry= 0;

 while(head1!=NULL && head2!=NULL){

  int sum= carry + head1->data + head2->data;
  int digit= sum % 10;
  carry= sum / 10;

  node* newNode= new node(digit);

  if(ansHead==NULL){
    ansHead=newNode;
    ansTail=newNode;
  }
  else{
    ansTail->next= newNode;
    ansTail=newNode;
  }
  head1=head1->next;
  head2=head2->next;
 }

 while(head1!=NULL){
int sum= carry+ head1->data;
int digit= sum % 10;
carry= sum / 10;
node* newNode=new node(digit);
ansTail->next=newNode;
ansTail=newNode;
head1=head1->next;
 }

  while(head2!=NULL){
int sum= carry+ head2->data;
int digit= sum % 10;
carry= sum / 10;
node* newNode=new node(digit);
ansTail->next=newNode;
ansTail=newNode;
head2=head2->next;
 }

 while(carry!=0){
  int sum =carry;
  int digit= sum % 10;
carry= sum / 10;
node* newNode=new node(digit);
ansTail->next=newNode;
ansTail=newNode;
 }
  //step 3 : reverse the linked list 

  ansHead=reverse(ansHead);
  return ansHead;
}

int main(){
  //first ll
    node* head1= new node(2);
    node* second1= new node(2);
        head1->next=second1;

//second ll
    node* head2= new node(2);
    node* second2= new node(2);
    node* third2= new node(2);
    head2->next= second2;
    second2->next=third2;

      node* ans= adding(head1,head2);

      print(ans);

    return  0;
}