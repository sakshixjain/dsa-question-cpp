#include <iostream>
using namespace std;

class dog{
  private:

  int weight;

  public:
int y;
string z;
char c;

//constructor
dog(){
  this->weight=0;
  this->y=0;
  this->z= "shj";
  cout<<"contructor ka bulawa aaya h "<<endl;
}

//periterized constructor 
dog(int y){
  this->y = y;
  cout<<" Perimeterized  constructor "<<endl;
}
// second example of perimeterized constructor
dog(int y, int z){
  this->y = y;
  this->z= z;
  cout<<" Perimeterized second constructor "<<endl;
}

//copy constructor 
dog(dog &obj){
  this->y= obj.y;
  this->z= obj.z;
  this->c= obj.c;
  cout<<" COpy Constructor "<<endl;
}

void eat(){
 cout<<"eat"<<endl;
}
void bark(){
 cout<<"bark"<<endl;

}

int getWeight(){
  return weight;
}

void setWeight(int weight){
  this->weight= weight;
}

void print(){
  cout<<this->y <<" "<<this->z<<" "<<this->c<<endl;
}

~dog(){
  cout<<" I am Inside the destructor"<<endl;
}

};

int main() {

  // Object creation 

    //static memory
dog animal;

// animal.y= 23;
// animal.z= "paritosh";
//   cout << "Hello world! " <<sizeof(dog)<< endl;
//   cout<<" Age of animal is "<<animal.y<<endl;
//   cout<<" NAme of the animal "<<animal.z<<endl;
// animal.eat();
// animal.bark();

// animal.setWeight(18);
// cout<<"weight private "<<animal.getWeight()<<endl;

  //Dynamic memory

//   dog* mammal = new dog;
// // frist type

//   (*mammal).y = 12;
//   (*mammal).z= "payal";

// //second type
//   mammal->y=12;
//   mammal->z= "pooja";

//   mammal->eat();

//perimeterised 
// dog a(10);
// dog* b= new dog(23, 56);

//copy constructor
// dog p= a;
// dog r(b);

// dog a;
// a.y= 34;
// a.z= "payal h chankai";
// a.c= 'u';

// dog b= a;

// a.print();
// b.print();

// a.z[0]='Z';
// a.print();

cout<<" a static constructor"<<endl;
dog a;
a.y= 5;

cout<<"b dynamic contructor"<<endl;
dog* b= new dog();
b->y= 67;

delete b;
  return 0;
}

