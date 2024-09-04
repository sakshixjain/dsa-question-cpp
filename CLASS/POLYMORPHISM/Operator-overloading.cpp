#include <iostream>
using namespace std;
 
 class addition{
   public:
  int val;
  
  void operator+(addition& obj2){
    int val1 = this-> val;
    int val2 = obj2.val;
    cout<<(val2-val1)<<endl;
  }

 } ;

int main(){
addition obj1 , obj2;
obj1.val=8;
obj2.val=7;
//subtraction
obj1+obj2;
}
