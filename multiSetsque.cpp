#include<bits/stdc++.h>
using namespace std;

int main(){
     int t;
     cin>>t;
     while (t!=0)
     {
        int b,time;
        cin>>b>>time;
         multiset<int> m;
        for (int i = 0; i < b; i++)
        {
           long long n;
           cin>>n;
           m.insert(n);
            
        }   
                   int candyCt=0;

         for (int i = 0; i < time; i++)
         {
           auto maxCandy= (--m.end());
           
           m.erase(*maxCandy);
           m.insert(*maxCandy/2);
            candyCt+=(*maxCandy);
         }
         cout<<candyCt<<endl;

         t--;
     }
     
}