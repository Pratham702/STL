#include<bits/stdc++.h>
using namespace std;
void show_vec(vector<int> &v){
    cout<<"size:"<<v.size()<<endl;
for (int i = 0; i < v.size(); i++)
{
    
    cout<<v[i]<<" ";

}
v.push_back(8);
cout<<endl;
}
int main(){

    vector<int> a;
    a.push_back(3);
    a.push_back(2);
    a.push_back(2);
  
   vector<int> aa =a;
   aa.push_back(5);
    show_vec(a);
    show_vec(a);
   show_vec(aa);
   cout<<a.capacity()<<endl;
}