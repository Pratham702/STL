#include<bits/stdc++.h>
using namespace std;
void print(map<int,string> &m){
    cout<<m.size()<<endl;
    for(auto &pr : m){
    cout<<pr.first<<" "<<pr.second<<endl;
}
}
// void printme(map<int,int> &m){

//     cout<<m.size()<<endl;
//     for(auto &pr : m){
//     cout<<pr.first<<" "<<pr.second<<endl;
// }

// }
int main(){
map<int,string> m;
m[2]="second";//O(logn)
m[4]="four";
m[7]="seven";
m.insert({8,"eight"});
m[2]="two";//here it will update value for its unique key
// map<int,int> me;
// me[2];//for int type of data value if we not initialise then it will by default takes 0
// printme(me);

auto it=m.find(3);
// cout<<"finding value"<<endl;
// if (it==m.end())
// {
//     cout<<"no value"<<endl;
// }
// else
// {
//     cout<<(it->first)<<" "<<(it->second)<<endl;
// }
if (it!=m.end())
{
    m.erase(it);

}
// m["abcd"]="dad";//O(string.size*logn) because for sorting in map itself it will traverse initially for string size then logn to insert it
// m.clear();//it will clear map
print(m);


}