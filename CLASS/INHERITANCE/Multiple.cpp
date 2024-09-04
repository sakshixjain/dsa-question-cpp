// #include <iostream>
// using namespace std;

// class animal{
//   public:
//   int breed;

// };

// class mammel{
//     public:
//     int feature;
// };
// class cow: public animal, public mammel{
// public:
// int integration;
// };

// int main() {
//   cow c;
//   cout<<c.breed<<" "<<c.feature<<" "<<c.integration;
// }

                            //DIAMOND PROBLEM
                            //IMPORTENT FOR PROBLEM

#include <iostream>
using namespace std;

class animal{
  public:
  int breed;
 animal() { 
    breed=105;
    }

};

class mammel{
    public:
    int breed;
    mammel(){
        breed= 420;
    }
};
class cow: public animal, public mammel{
public:
int integration;
};

int main() {
  cow c;
  cout<<c.animal::breed<<" "<<" "<<c.integration<<endl;
  cout<<c.mammel::breed<<" "<<" "<<c.integration;

}