// #include <iostream>
// using namespace std;

// class node{
//   public:
//   int data;
//   node* prev;
//   node* next;

//   node(){
//      this->data=0;
//      this->prev= NULL;
//      this->next= NULL;
//   }
//   node(int data){
//     this->data= data;
//     this->prev= NULL;
//     this->next= NULL;
//   }

//   ~node(){
//     cout<<" node with value: "<<this->data<<" deelted"<<endl;
//   }
// };

// void print(node* &head){
//   node* temp = head;
//   while(temp!= NULL){
//     cout<<temp->data<<" ";
//     temp= temp->next;
//   }
// }

// int getLength(node* &head){
//   int len=0;
//   node* temp= head;
//   while(temp!=NULL){
//     temp= temp->next;
//     len++;
//   }
//   return len;
// }

// void insertAtHead(node* &head, int data, node* &tail){
//   if(head==NULL){
//     node* newnode = new node(data);
//     head= newnode;
//     tail= newnode;
//   }
//   else{
//     //step 1 : create a node
//     node* newnode= new node(data);
//     //step 2:
//     newnode->next = head;
//     //step 3
//     head->prev= newnode;
//     // step4
//     head= newnode;
//   }
// }

// void insertAtTail(node* &head, int data, node* &tail){
  
//   if(head== NULL){
//     node* newnode= new node(data);
//     head= newnode;
//     tail= newnode;
//   }
//   else{
//     // step1
//     node* newnode= new node(data);
//     //step 2
//     tail->next= newnode;
//     newnode->prev= tail;
//     tail= newnode;
//   }
// }

// void insertAtPosition(node* &head, int data, node* &tail, int position){
//       if(head==NULL){
//         node* newnode= new node(data);
//         head= newnode;
//         tail= newnode;
//       }
//       else{
//         if(position==1){
//           insertAtHead(head, data, tail);
//           return ;
//         }
//         int len = getLength(head);
//         if(position>len){
//           insertAtTail(head, data, tail);
//           return;
//         }
//         //sttep 1: find prev && curr
//        int i=1;
//        node* prevNode= head;
//        while(i<position-1){
//         prevNode= prevNode->next;
//         i++;
//        }
//        node* curr= prevNode->next;
   
//         //step 2
//      node* newnode= new node(data);


//         //step 3
//         prevNode->next= newnode;
//         newnode->prev= prevNode;
//         curr->prev= newnode;
//         newnode->next= curr;
//       }

// }

// void deletePosition(node* &head, node* &tail, int position){
//   if(head==NULL){
//     cout<<" Linked List is empty";
//     return;
//   }
//   if(head->next== NULL){
//     node* temp= head;
//      head= NULL;
//      delete temp;
//      return;
//   }
//     int len= getLength(head);
//   if(position>len){
//     cout<<" please enter valid position "<<endl;
//   }

//   if(position==1){
//     //want to delete the first node
//     node* temp = head;
//     head = head->next;
//     head->prev= tail;
//     temp->next= NULL;

//   }

//   if(position== len){
//     node* temp= tail;
//     tail=tail->prev;
//     temp->prev= NULL;
//     tail->next= head;
//     delete temp;
//     return ;
//   }
//   // delete at middle

//   //strp 1: find left, curr, right
//   int i=1;
//   node* left  =head;
//   while(i<position-1){
//     left= left->next;
//     i++;
//   }
//   node* curr= left-> next;
//   node* right = curr->next;
  

//   //stp2
//   left->next= right;
//   //step3
//   right->prev= left;
//   // step4 
//   curr->next =NULL;
// curr-> prev= NULL;
// delete curr;

// }

// int main() {
  
//   node* first= new node(10);
//   node* second= new node(20);
//   node* third= new node(30);
//   node* head= first;
//   node* tail = third;

//   first->next= second;
//   second->prev= first;

//   second->next= third;
//   third->prev= second;

// //   print(first);
// //   cout<<endl;

// //   insertAtHead(head, 345, tail);
// //   cout<<endl;
// //   print(head);

// //    insertAtTail(head, 346, tail);
// //   cout<<endl;
// //   print(head);

// cout<<endl;
//     insertAtPosition(head, 316, tail,2);
//   cout<<endl;
//   print(head);
//   cout<<endl;
//   deletePosition(head, tail, 3);
//   cout<<endl;
//   print(head);


//   return 0;
// }

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

int main(){
  
  // node* head = new node(23);
  node* head = NULL;
  node* tail= NULL;
  insertAtHead(head, tail, 34);
    insertAtHead(head,tail, 78);
      insertAtHead(head,tail, 45);
        insertAtHead(head,tail, 98);
          insertAtHead(head,tail, 56);
          // insertAtTail(head,tail,6);
          print(head);
          
  cout<<endl;
  // insertATPosition(33,head,tail,6);

  // print(head);
  // cout<<endl;
  //  cout<<" head: "<<head-> data<<endl;
  //         cout<<" tail : "<<tail->data<<endl;
    // node* first= new node(2);
    // node* second= new node(4);
    // node* third= new node(6);
    // node* fourth= new node(8);
    // node* fifth= new node(10);
    // node* sixth= new node(12);


    // first->next=second;
    // second->next=third;
    // third->next= fourth;
    // fourth->next= fifth;
    // fifth->next=sixth;

      // cout<<" print all LL "<<endl;
      // print(first);
      deleteNode(5,head,tail);
      print(head);

    return  0;
}