#include<bits/stdc++.h>
using namespace std;

int main(){
    map<pair<string,string>,vector<int>> m;

    int n;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        int ct;
        string fn,ln;
        cin>>fn>>ln>>ct;
        for (int j = 0; j < ct; ++j)
        {
            int x;
            cin>>x;
            m[{fn,ln}].push_back(x);
        }

       
        }
         for(auto &pr : m){
            auto &name=pr.first;
            auto &vec=pr.second;
            cout<<name.first<<" "<<name.second<<endl;
            cout<<vec.size()<<endl;
            for(auto &lis :vec){
                cout<< lis<<" ";
            }
            cout<<endl;
    }
}       