#include <iostream>
using namespace std;

class node{
  public:
  int data;
  node* prev;
  node* next;

  node(){
     this->data=0;
     this->prev= NULL;
     this->next= NULL;
  }
  node(int data){
    this->data= data;
    this->prev= NULL;
    this->next= NULL;
  }

  ~node(){
    cout<<" node with value: "<<this->data<<" deelted"<<endl;
  }
};

void print(node* &head){
  node* temp = head;
  while(temp!= NULL){
    cout<<temp->data<<" ";
    temp= temp->next;
  }
}

int getLength(node* &head){
  int len=0;
  node* temp= head;
  while(temp!=NULL){
    temp= temp->next;
    len++;
  }
  return len;
}

void insertAtHead(node* &head, int data, node* &tail){
  if(head==NULL){
    node* newnode = new node(data);
    head= newnode;
    tail= newnode;
  }
  else{
    //step 1 : create a node
    node* newnode= new node(data);
    //step 2:
    newnode->next = head;
    //step 3
    head->prev= newnode;
    // step4
    head= newnode;
  }
}

void insertAtTail(node* &head, int data, node* &tail){
  
  if(head== NULL){
    node* newnode= new node(data);
    head= newnode;
    tail= newnode;
  }
  else{
    // step1
    node* newnode= new node(data);
    //step 2
    tail->next= newnode;
    newnode->prev= tail;
    tail= newnode;
  }
}

void insertAtPosition(node* &head, int data, node* &tail, int position){
      if(head==NULL){
        node* newnode= new node(data);
        head= newnode;
        tail= newnode;
      }
      else{
        if(position==1){
          insertAtHead(head, data, tail);
          return ;
        }
        int len = getLength(head);
        if(position>len){
          insertAtTail(head, data, tail);
          return;
        }
        //sttep 1: find prev && curr
       int i=1;
       node* prevNode= head;
       while(i<position-1){
        prevNode= prevNode->next;
        i++;
       }
       node* curr= prevNode->next;
   
        //step 2
     node* newnode= new node(data);


        //step 3
        prevNode->next= newnode;
        newnode->prev= prevNode;
        curr->prev= newnode;
        newnode->next= curr;
      }

}

void deletePosition(node* &head, node* &tail, int position){
  if(head==NULL){
    cout<<" Linked List is empty";
    return;
  }
  if(head->next== NULL){
    node* temp= head;
     head= NULL;
     delete temp;
     return;
  }
    int len= getLength(head);
  if(position>len){
    cout<<" please enter valid position "<<endl;
  }

  if(position==1){
    //want to delete the first node
    node* temp = head;
    head = head->next;
    head->prev= NULL;
    temp->next= NULL;

  }

  if(position== len){
    node* temp= tail;
    tail=tail->prev;
    temp->prev= NULL;
    tail->next= NULL;
    delete temp;
    return ;
  }
  // delete at middle

  //strp 1: find left, curr, right
  int i=1;
  node* left  =head;
  while(i<position-1){
    left= left->next;
    i++;
  }
  node* curr= left-> next;
  node* right = curr->next;
  

  //stp2
  left->next= right;
  //step3
  right->prev= left;
  // step4 
  curr->next =NULL;
curr-> prev= NULL;
delete curr;

}

// node* reverseusingloop(node* &head){
//   node* prevNode= NULL;
//        node* curr= head;
//        while(curr!=NULL){
//         node* temp = curr->next;
//         curr->next= prevNode;
//         curr->prev= temp;
//         prevNode= curr;
//         curr= temp;
//        }
//        return prevNode;
// }

node* reverseUsingRecursion(node* &prevNode, node* &curr){
 
  if(curr==NULL){
    return prevNode;
  }
   node* temp = curr->next;
        curr->next= prevNode;
        curr->prev= temp;
        prevNode= curr;
        curr= temp;

return reverseUsingRecursion(prevNode, curr);
}

int main() {
  
  node* first= new node(10);
  node* second= new node(20);
  node* third= new node(30);
  node* head= first;
  node* tail = third ;

  first->next= second;
  second->prev= first;

  second->next= third;
  third->prev= second;

  print(first);
  cout<<endl;

//   insertAtHead(head, 345, tail);
//   cout<<endl;
//   print(head);

//    insertAtTail(head, 346, tail);
//   cout<<endl;
//   print(head);

// cout<<endl;
//     insertAtPosition(head, 316, tail,2);
//   cout<<endl;
//   print(head);
//   cout<<endl;
  // deletePosition(head, tail, 8);
  // head = reverseusingloop(head);
   node* prevNode= NULL;
       node* curr= head;
 head= reverseUsingRecursion(prevNode, curr);
  print(head);
 cout<<endl;
  return 0;
}