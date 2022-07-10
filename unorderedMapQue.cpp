#include<bits/stdc++.h>
using namespace std;
//given n strings ,print frequencies for particular given query
int main(){
    unordered_map<string,int> m;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int count=1;
        string s;
        cin>>s;
        m[s]=m[s]+1;//m[s]++
        
    }
    int q;
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        string str;
        cin>>str;
        cout<<m[str]<<endl;
    }
    
    
}