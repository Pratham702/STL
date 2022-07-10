#include <bits/stdc++.h> 
using namespace std;
    // Write your code here.
int main(){
    int n;
    cin>>n;
    while(n!=0){
        int num;
        cin>>num;
        vector<int> v;
        for(int i=0;i<num;i++){
            cin>>v[i];
        }
    sort(v.begin(),v.end());
    auto lastEleIt=(--v.end());
    auto firstEleIt=(v.begin());
    cout<< (*lastEleIt-*firstEleIt)<<endl;
    n--;
}
    }
