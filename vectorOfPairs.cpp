#include<bits/stdc++.h>
using namespace std;
void printVec(vector<pair<int,int>>& v){
for (int i = 0; i < v.size(); i++)
{
    cout<<"size:"<<v.size()<<endl;
    cout<<v[i].first<< " "<<v[i].second<<endl;
}
}
int main(){
vector<pair<int,int>> vp={{2,5},{1,2},{3,4}};
printVec(vp);

}