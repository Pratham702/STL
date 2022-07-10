#include<bits/stdc++.h>
using namespace std;
int main(){
// pair<int,int> p;
// p=make_pair(3,3);
// cout<<p.first<<endl<<p.second<<endl;
// pair<int,int> &pa=p;
// p.first=2;
// cout<<pa.first<<endl<<pa.second<<endl;
pair<int,int> a[3];
cout<<"enter the elements of array in pair:"<<endl;
// for (int i = 0; i < 3; i++)
// {
//     cin>>a[i].first>>a[i].second;

// }
a[0]={3,8};
a[2]={3,2};
a[1]={5,4};
swap(a[2],a[0]);
for (int i = 0; i < 3; i++)
{
    cout<<a[i].first<<" "<<a[i].second<<endl;
}



}