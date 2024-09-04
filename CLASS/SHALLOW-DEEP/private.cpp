#include <iostream>
using namespace std;

class abc{
   mutable int x;
    int y;
    int z;
    public:
    // abc(){
    //     cout<<"Return Constructor "<<endl;
    // }

             // Constructor old style

    // abc(int p, int q, int r=0){
    //      x=p;
    //      y=q;
    //      r=z;
    // }

              // constructor new style

              abc(int p,int q, int r=0): x(p), y(q) , z(r)
               {
                cout<<"initialisation list "<<endl;
               }

   int getX() const
   {
    int x=90;
       return x;
    }
    void setX(int z){
     x=z;
    }
     int getY()const
     {
       return y;
    }
    void setY(int b){
     b=y;
    }
    int getZ() const 
    {
        return z;
    }
   
};

 void printABC(const abc &a){
        cout<<a.getX()<<" "<<a.getY()<<" "<<a.getZ()<<endl;
    }
int main(){
 
abc a(7,8);
printABC(a);
// cout<<a.getX()<<" "<<endl;
// cout<<a.getY()<<endl;
}
int main2(){

}