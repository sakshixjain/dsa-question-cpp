#include <iostream>
using namespace std;

class animal{
  protected:
  int age;

};

class an: public animal{
public:
  void fun(){
    cout<<this->age;
    cout<<" eating suar"<<endl;
  }
};

int main() {
   an ani;
  //  cout<<ani.age;
   ani.fun();
  return 0;
}