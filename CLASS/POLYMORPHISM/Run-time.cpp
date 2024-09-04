// #include <iostream>
// using namespace std;

// class Animal{
//   public:
//  virtual  void speak(){
//     cout<<"speaking"<<endl;
//   }

// };
// class dog:public Animal{
// public:
//  void speak(){
//     cout<<"Bhau Bhau "<<endl;
//   }
// };

// int main() {
// // dog a;
// // a.speak();

// Animal* a = new Animal();
// a->speak();
 
//  dog* b = new dog();
// b->speak();

// //UPCASTING
// Animal* c= new dog();
// c->speak();

// //DOWNCASTING
//  dog* d= (dog*)new Animal();
// d->speak();
//   return 0;
// }



#include <iostream>
using namespace std;

class Animal{
  public:
  Animal(){
    cout<<"i am Animal constructor"<<endl;
  }
virtual void speak(){
    cout<<"speaking"<<endl;
  }


};
class dog:public Animal{
public:
  dog(){
    cout<<"i am dog constructor"<<endl;
  }
 void speak(){
    cout<<"Barking"<<endl;
  }
};

class labra: public dog{
  public:
  labra(){
    cout<<"i am a labra constructor"<<endl;
  }
  void speak(){
    cout<<" Bhau Bhau"<<endl;
  }
};
int main() {

// labra l;
// l.speak();
// Animal* a= new dog();
// a->speak();
dog* l= (dog*) new labra();
l->speak();
  return 0;
}