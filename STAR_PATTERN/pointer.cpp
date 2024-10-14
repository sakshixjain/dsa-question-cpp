#include <iostream>
using namespace std;
int fastExponent(int a, int b){
    int ans=1;
    while(b>0){
        if(b&1){
            //odd
            ans*=a;
        }
        a*=a;
        b>>=1;
    }
    return ans;
}
int slowExponent(int a, int b){
    int ans=1;
    for(int i=0; i<b; i++){
        ans=ans*a;
    }
    return ans;
}
int main(){
    // int a=5;
    // cout<< &a <<endl;


    // int b=4;
    // //pointer create
    // int*ptr= &b;
    // //access the value ptr is pointing to
    // cout<<*ptr<<endl;

//     int a=5;
//     int* b= &a;
//     cout<<sizeof(b)<<endl;

//     double d=6.98;
//     double* dt= &d;
//  cout<<sizeof(dt)<<endl;
//     char c='a';
//     char*ct=&c;
//      cout<<sizeof(ct)<<endl;

//int arr[4]={12,45,67,89};
// cout<<arr<<endl;
// cout<<arr[0]<<endl;
// cout<<&arr<<endl;
// cout<<&arr[0]<<endl; 
// cout<<*arr+1<<endl;
//  cout<<*arr+1<<endl; 
//  cout<<*(arr)+1<<endl;
//  cout<<*(arr+1)<<endl;
//   cout<<arr[1]<<endl; 
//   cout<<*(arr+2)<<endl; 
// cout<<*(arr+3)<<endl;


// int arr[10];
// int*p =arr;
// cout<<sizeof(arr)<<endl;
// cout<<sizeof(p)<<endl;
// cout<<sizeof(*p)<<endl;

// char ch[10]= "Sakshi";
// char*c=ch;
// cout<<ch<<endl;
// cout<<&ch<<endl;
// cout<<ch[0]<<endl;

// cout<<*c<<endl;
// cout<<&c<<endl;
// cout<<c<<endl;


// char ch = 'k';
// char*cp=&ch;
// cout<<cp<<endl;


cout<<slowExponent(4,3)<<endl;
cout<<fastExponent(4,3)<<endl;
return 0;
}

