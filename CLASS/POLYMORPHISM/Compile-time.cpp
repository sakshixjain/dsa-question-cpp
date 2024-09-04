      //FUNCTION OVERLOADING

#include <iostream>
using namespace std;
 
 class addition{
   public:
  int  sum(int a, int b){
        return a+b;
   }
   int sum(int a, int b, int c){
    return  a+b+c;
   }
   int sum(float a, float b ){
    return a+b+7;
   }

 } ;

int main(){
 addition A;
 cout<<A.sum(2.5f,8.56f);
}
