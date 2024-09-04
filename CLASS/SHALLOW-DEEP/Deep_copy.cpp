#include <iostream>
using namespace std;

class abc{
    public:
    int x;
    int *y;

abc(int p,int q): x(p), y(new int(q)) {  }

//DEEP COPY
abc(const abc &obj){
    x=obj.x;
    y= new int(*obj.y);
}


void print() const {
    printf("X:%d\nPTR Y:%p\nContent of Y (*y):%d\n\n",x,y,*y);
}
~abc(){
    delete y;
}
};
int main(){
//     abc a(6,9);
//     cout<<"print a\n";
//     a.print();

//     abc b=a;
//     cout<<"print b\n";

//     b.print();
//     *b.y= 56;
//     cout<<"print b\n";

//     b.print();
//     cout<<"print a\n";

//    a.print();

abc *a= new abc(1,3);
abc b= *a;
delete a;
b.print();
    return 0;

}