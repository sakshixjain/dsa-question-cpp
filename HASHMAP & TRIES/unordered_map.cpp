#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
  //creation
   unordered_map<string, int>mp;

//insertion
pair<string, int>p= make_pair("Scorpio", 9);
mp.insert(p);

pair<string, int>p2("alto", 2);
mp.insert(p2);

mp["fortuner"]= 10;

//accesss
cout<<mp.at("alto")<<endl;
cout<<mp.at("Scorpio")<<endl;

cout<<mp["fortuner"]<<endl;


//search
cout<<mp.count("Scorpio")<<endl;
cout<<mp.count("bmw")<<endl;

if(mp.find("fortuner") != mp.end()){
cout<<"fortuner found"<<endl;
}
else{
cout<<" not found"<<endl;
}
 
 cout<<mp.size()<<endl;

 cout<<mp["hummer"]<<endl;
  cout<<mp.size()<<endl;

cout<<"print all entry"<<endl;

for(auto i: mp){
  cout<<i.first<<" = "<<i.second<<endl;
}

  return 0;
}