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
vector<vector<int>> v;
for (int i = 0; i < n; i++)
{
    int x;
    cout<<"enter the size for  vector:"<<i+1<<endl;
    cin>>x;
    vector<int> temp;
    v.push_back(vector<int> ());//intially we are pushing one empty vector hence we can push back elements in the vector in line 30
    for (int j = 0; j < x; j++)
    {
        int l;
        cout<<"enter the elements for vector"<<i+1<<endl;
        cin>>l;
        
       
        temp.push_back(l);
       // v[i].push_back(l);

    }
    v.push_back(temp);
}
vector<int> l={3,2,1}; //pushing another vector without using loop
v.push_back(l);
for (int i = 0; i < v.size(); i++)
{
    printVec(v[i]);
}

}