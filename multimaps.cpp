#include<bits/stdc++.h>
using namespace std;

int main(){

multimap<int,string> m;//in multimaps we can have duplicates of keys
m.insert({3,"third"});
m.insert({3,"third2"});
for (auto &pr : m)
{
    cout<<pr.first<<" "<<pr.second<<endl;
}

}