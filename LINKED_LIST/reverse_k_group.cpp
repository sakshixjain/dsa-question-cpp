// #include <iostream>
// using namespace std;

//  class Listnode{
//   public:
//   int data;
//   Listnode* next;

//   Listnode(int data){
//     this->data=data;
//     this->next= NULL;
//   }

//  };
 
//  // find middle of the linked list
//  void print(Listnode* head){
//   Listnode* temp = head;
//   while(temp!=NULL){
//     cout<<temp->data<<" ";
//     temp= temp->next;
//   }
//   cout<<endl;
//  }

// Listnode* getMiddle(Listnode* head){
//   if(head==NULL){
//     cout<<"Linked list is empty "<<endl;
//     return head;
//   }
//   if(head->next==NULL){
//     return head;
//   }

//   Listnode* slow= head;
//   Listnode* fast= head;

//   while(slow!=NULL && fast!= NULL){
//     fast=fast->next;
//     if(fast!=NULL){
//     fast=fast->next;
//     slow=slow->next;
//     }
//   }
//   return slow;
// }

// int getLength(Listnode* head){
//   int len=0;
//   Listnode* temp = head;
//   while(temp!=NULL){
//     temp = temp->next;
//     len++;
//   }
//   return len;
// }

// // k- group nodes reverse linked list
// Listnode* reverseKNodes(Listnode* head , int k){
//   if(head==NULL){
//     cout<<" linked list is empty  "<<endl;
//     return NULL;
//   }

//   int len = getLength(head);
//   if(k>len){
//     return head;
//   }
//   //step 1: k reverse list
//   Listnode* prev= NULL;
//   Listnode* curr= head;
//   Listnode* Next= curr->next;
//   int count=0;
//   while(count<k){
//     Next= curr->next;
//     curr->next= prev;
//     prev= curr;
//     curr= Next;
//     count++;
//   }
//   //step 2 recursive call
//   if(Next!=NULL){
//     head->next= reverseKNodes(Next, k);
//   }
//   return prev;
  
// }
// bool checkForLoop(Listnode* &head){
//   if(head==NULL){
//     cout<<" list is empty ";
//     return false;
//   }

//   Listnode* slow= head;
//   Listnode* fast= head;
//   while(fast!=NULL){
//     fast= fast->next;
//     if(fast!=NULL){
//       fast= fast->next;
//       slow=slow->next;
//     }
//     if(slow==fast){
//       return true;
//     }
//   }
//   return false;
// }

// Listnode* startingPointLoop(Listnode* &head){
//   if(head==NULL){
//     cout<<" list is empty ";
//     return NULL;
//   }

//   Listnode* slow= head;
//   Listnode* fast= head;
//   while(fast!=NULL){
//     fast= fast->next;
//     if(fast!=NULL){
//       fast= fast->next;
//       slow=slow->next;
//     }
//     if(slow==fast){
//       slow= head;
//       break;
//     }
//   }
//     while(slow!=fast){
//       slow=slow->next;
//       fast=fast->next;
//   } 
//    return slow;
// }

// Listnode* removeLoop(Listnode* &head){
//   if(head==NULL){
//     cout<<" list is empty ";
//     return NULL;
//   }

//   Listnode* slow= head;
//   Listnode* fast= head;
//   while(fast!=NULL){
//     fast= fast->next;
//     if(fast!=NULL){
//       fast= fast->next;
//       slow=slow->next;
//     }
//     if(slow==fast){
//       slow= head;
//       break;
//     }
//   }
//   Listnode* prev= fast;
//     while(slow!=fast){
//       prev= fast;
//       slow=slow->next;
//       fast=fast->next;
//   } 
//   prev->next= NULL;
//    return slow;
// }


// int main() {
//     Listnode* head= new Listnode(10);
//     Listnode* second= new Listnode(20);
//     Listnode* third= new Listnode(30);
//     Listnode* fourth= new Listnode(40);
//     Listnode* fifth= new Listnode(50);
//     Listnode* sixth= new Listnode(60);
//     Listnode* seventh= new Listnode(70);
//     Listnode* eigth= new Listnode(80);
//     Listnode* nineth= new Listnode(90);

//     head->next= second;
//     second->next= third;
//     third->next= fourth;
//     fourth->next= fifth;
//     fifth->next= sixth;
//     sixth->next= seventh;
//     seventh->next= eigth;
//     eigth->next= nineth;
//     nineth->next= third;

// cout<<" Loop is present or not "<<checkForLoop(head)<<endl;
// cout<<"starting point Loop is "<<startingPointLoop(head)->data<<endl;

// removeLoop(head);
// print(head);

// cout<<" Loop is present or not "<<checkForLoop(head)<<endl;
//     // print(head);
//     // head= reverseKNodes(head, 5);
//     // print(head);

// cout<<"Middle of the linked list IS: "<<getMiddle(head)->data<<endl;
//   return 0;
// }

#include<bits/stdc++.h>
using namespace std;

string solve(int n,int m, vector<vector<int>> mat){
    int x=0;
    for(int i=0;i<n;i++)
    {
        int ans=0;
        for(int j=m-1;j>=0;j--)
        {
            ans=mat[i][j]-(mat[i][j]<=ans);
        }
        x^=ans;
    }
    if(x)
    {
        return "First";
    }
    else{
        return "Second";
    }
}