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
// INSERT A NODE  RIGHT AT THE HEAD OF LINKED LIST
void insertAtHead(node* &head, node* &tail, int data){

   if(head==NULL){
  node* newNode = new node(data);
  head= newNode;
  tail = newNode;
  return ;
 }
  //step 1
  node* newNode = new node(data);
  // step 2
  newNode -> next= head;
// step 3
head= newNode;
}
                    // INSET AT TAIL FIRST METHOD
// void insertAtTail(node* &head,node* &tail, int data){
//   //step 1
//      node* newNode = new node(data);
// // step 2
//  if(tail==NULL){
//   tail= newNode;
//   head= newNode;
//  }
//  else{
//   tail-> next= newNode;
//  }
     
// // step 3
//      tail=newNode;
// }
  
                      //INSERT THE TAIL 
void insertAtTail(node* &head,node* &tail, int data){

 if(head==NULL){
  node* newNode = new node(data);
  head= newNode;
  tail = newNode;
  return ;
 }
  //step 1
     node* newNode = new node(data);
// step 2
  tail-> next= newNode;   
// step 3
     tail=newNode;
}


void print(node* &head){

    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
}

int findLength(node* &head){
  int len=0;
  node* temp = head;
  while(temp!= NULL){
    temp= temp-> next;
    len++;
  }
  return len;
}

void insertATPosition(int data, node* &head, node* &tail , int position ){
   
   if(head==NULL){
    node* newNode= new node(data);
    head= newNode;
    tail = newNode;
    return ;
   }
 
  if(position ==0){
    insertAtHead(head, tail , data);
  }
  int len= findLength(head);
  if(position>=len){
    insertAtTail(head, tail , data);
  }

    //step 1: find the position : prev && curr
   int i=1; 
   node* prev = head;
   while(i<position){
  prev= prev->next;
  i++;
   }

node* curr= prev-> next;
//step 2: create node
node* newNode= new node(data);
//step 3: 
newNode->next = curr;
//step4:
prev->next= newNode;
}

void deleteNode(int position, node* &head, node* &tail ){

  if(head==NULL){
    cout<<"Cant delete , ll is empty";
    return ;
  }

                 //DELTE FIRST NODE
  if(position ==1){
    node* temp= head;
    head= head-> next;
    temp-> next = NULL;
    delete temp;
    return ;
  }

                   //DELETE LAST NODE
  int len= findLength(head);
  if(position==len){
    //find prev
    int i=1;
    node* prev= head;
    while(i<position-1){
      prev= prev->next;
      i++;
    }
    //step2
    prev->next= NULL;
    node* temp = tail;
    tail=prev;
    delete temp;
    return;
  }

                      //DELETE MIDDLE NODE 

    // FIND PREV AND CURR
    int i=1; 
    node* prev= head;
    while(i<position-1){
      prev= prev-> next;
      i++;
    }     
    node* curr = prev->next;

    //sTEP 2 
    prev->next= curr->next;

    // step3
    curr->next = NULL;
    //
    delete curr;
}

// node* reverseusingRecursion(node* &prev, node* curr){
//   if(curr==NULL){
//     return prev;

//   }
//   node* temp= curr->next;
//   curr->next= prev;
//   prev= curr;
//   curr= temp;
//   return  reverseusingRecursion(prev, curr);
// }

node* reverseusingLoop(node* head){
    node* prev= NULL;
       node* curr= head;
       while(curr!=NULL){
         node* temp= curr->next;
          curr->next= prev;
          prev= curr;
          curr= temp;
       }
       return prev;

}

int main(){
  
  // node* head = new node(23);
  node* head = NULL;
  node* tail= NULL;
  // insertAtHead(head, tail, 34);
  //   insertAtHead(head,tail, 78);
  //     insertAtHead(head,tail, 45);
  //       insertAtHead(head,tail, 98);
  //         insertAtHead(head,tail, 56);
  //         insertAtTail(head,tail,6);
  //         print(head);
          
  cout<<endl;
  // insertATPosition(33,head,tail,6);

  // print(head);
  // cout<<endl;
  //  cout<<" head: "<<head-> data<<endl;
  //         cout<<" tail : "<<tail->data<<endl;
    node* first= new node(2);
    node* second= new node(4);
    node* third= new node(6);
    node* fourth= new node(8);
    node* fifth= new node(10);
    node* sixth= new node(12);


    first->next=second;
    second->next=third;
    third->next= fourth;
    fourth->next= fifth;
    fifth->next=sixth;
    // sixth->next= first;
      cout<<" print all LL "<<endl;
      print(first);
      // deleteNode(5,head,tail);
      // print(head);
      //  node* prev= NULL;
      //  node* curr= head;
      // head= reverseusingRecursion(prev, curr);
    //  head= reverseusingLoop(head);
    //  print(head);

    return  0;
}