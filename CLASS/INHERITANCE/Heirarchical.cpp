#include <iostream>
using namespace std;

class fruit{
  public:
  int taste;
  int color;

  void flavour(){
    cout<<" Very Delicious "<<endl;
  }

};

class mango : public fruit{
public:
int integration;
};

class apple : public fruit{

};

int main() {
mango m;
m.flavour();
apple a;
a.flavour();
}