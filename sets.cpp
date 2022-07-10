#include<bits/stdc++.h>
using namespace std;
//same as maps,it is ordered just we don't have value for a key here only keys 
void print(set<string> &s){
    for (auto &str : s)
    {
        cout<<str<<endl;
    }
    
}
int main(){
    set<string> s;
    s.insert("prat");//logn
    s.insert("lob");
    s.insert("no");
    s.insert("one");
    s.insert("here");
  
  s.insert("lob");
auto it=s.find("lob");
if(it!=s.end()){
    s.erase(it);
}
print(s);


}