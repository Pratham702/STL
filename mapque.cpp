#include<bits/stdc++.h>
using namespace std;
//given n strings ,print unique strings in lexiographical order with their frequency
int main(){
    map<string,int> m;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int count=1;
        string s;
        cin>>s;
        m[s]=m[s]+1;//m[s]++
        
    }
    for(auto &pr:m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}