#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int>& v){
     cout<<"size:"<<v.size()<<endl;
for (int i = 0; i < v.size(); i++)
{
   
    cout<<v[i]<<" ";
}
cout<<endl;
}
int main(){
    int n;
    cin>>n;
vector<int> v[n];
for (int i = 0; i < n; i++)
{
    int x;
    cout<<"enter the size for  vector:"<<i+1<<endl;
    cin>>x;
    for (int j = 0; j < x; j++)
    {
        int l;
        cout<<"enter the elements for this vector"<<i+1<<endl;
        cin>>l;
        
        v[i].push_back(l);

    }
    
}

for (int i = 0; i < n; i++)
{
    printVec(v[i]);
}
cout<<v[0][2];

}