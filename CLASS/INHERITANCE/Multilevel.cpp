#include <iostream>
using namespace std;

class animal{
  public:
  string name;

};

class dog: public animal{
public:

  int age;
};

class labra:public dog{
    public:
   int weight;
};

int main() {
 labra l;
 cout<<l.name + "."<<" "<<l.age<<" "<<l.weight;
}