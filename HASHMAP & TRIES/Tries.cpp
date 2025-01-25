#include <iostream>
#include<unordered_map>
using namespace std;

class TrieNode{
public:
char data;
TrieNode* child[26];
bool isTerminal;

TrieNode(char d){
  this->data= d;
  // child= new TrieNode(26);
  for(int i=0; i<26; i++){
    child[i]= NULL;
  }
  this->isTerminal= false;
}
};

void insertWord(TrieNode* root, string word){
  if(word.length()==0){
    root->isTerminal= true;
    return;
  }
  char ch=word[0];
  int index= ch-'a';
  TrieNode* child ;

  //if present 
  if(root->child[index]!= NULL){
    child= root->child[index];
      }
      else{
        child= new TrieNode(ch);
        root->child[index]= child;
         
      }

      //recursion
      insertWord(child, word.substr(1));
}

bool searchWord(TrieNode* root , string word){
  if(word.length()==0){
    return root->isTerminal;

  }
   char ch=word[0];
  int index= ch-'a';
  TrieNode* child ;
 
 if(root->child[index] != NULL){
  child= root->child[index];
 }
 else{
  //rec call
return false;
 } 
 return  searchWord(child, word.substr(1));
}

int main() {

TrieNode* root= new TrieNode('-');

// root->insertWord("coding");

insertWord(root, "coding");
insertWord(root, "code");
insertWord(root, "coder");
insertWord(root, "codehelp");
insertWord(root, "baba");
insertWord(root, "baby");
insertWord(root, "babu");
insertWord(root, "shona");

string s="codi";
if(searchWord(root,s)){
  cout<<s<<" is present"<<endl;
}
else{
  cout<<s<<" is absent"<<endl;
}
  return 0;
}