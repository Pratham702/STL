#include<bits/stdc++.h>
using  namespace std;

int main(){

    vector<int> v={1,2,3,4,5};
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // vector<int> ::iterator it;
    // it=v.begin();
    // cout<<*(it+3)<<endl;
    //iterators for vectors
    // for ( it = v.begin(); it < v.end(); it++)
    // {
    //     cout<<(*it)<<" ";
    // }
    //iterators for vector of pairs
    vector<pair<int,int>> vp={{3,2},{1,2},{4,3}};
    //auto keyword
    //just writing auto keyword no need of declaring iterator

    // vector<pair<int,int>> ::iterator it;
    // for ( auto it =vp.begin(); it != vp.end(); it++)
    // {
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }

    //combning auto and range based loops

    for(auto &value : vp){
        cout<<value.first<<" "<<value.second<<endl;
    }



    //(*it).first  <=> it->first
    for (auto it =vp.begin(); it != vp.end(); it++)
    {
        cout<<(it->first)<<" "<<(it->second)<<endl;
    }
    //range based loops
    //this makes loops short

for(int val:v){  
    val++;//here val takes copy of each value of vector hence for changing the value we should use reference
    cout<<val<<" ";
}    
    cout<<endl;
//range based loops using reference
for (int &i : v)
{
    i++;
    cout<<i<<" ";
}


}