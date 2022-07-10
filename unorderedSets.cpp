#include<bits/stdc++.h>
using namespace std;
void print(unordered_set<string> &s){
    for (auto &str : s)
    {
        cout<<str<<endl;
    }
    
}
int main(){
    unordered_set<string> s;
    s.insert("prat");//O(1)
    s.insert("lob");
    s.insert("no");
    s.insert("one");
    s.insert("here");
  
  s.insert("lob");
// auto it=s.find("lob");
cout<<"enter no of strings to check:"<<endl;
int n;
cin>>n;
for (int i = 0; i < n; i++)
{
    string str;
cin>>str;

    if(s.find(str)==s.end()){
    cout<<" not found"<<endl;

}
else
cout<<"found"<<endl;
 

}


// print(s);


}