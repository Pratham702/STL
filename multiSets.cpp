#include<bits/stdc++.h>
using namespace std;
//multisets are useful in duplicates mostly
void print(multiset<string> &s){
    for (auto &str : s)
    {
        cout<<str<<endl;
    }
    
}
int main(){
    multiset<string> s;
    s.insert("prat");//logn
    s.insert("lob");
    s.insert("no");
    s.insert("one");
    s.insert("here");
  
  s.insert("lob");
// auto it=s.find("lob");
// if(it!=s.end()){
//     s.erase(it);//here if we are erasing any key by iterator hence it will delete first duplicate second remain as it is but in case of direct erasing it will completely delete that string or data
// }
s.erase("lob");
print(s);


}