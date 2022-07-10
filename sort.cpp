#include <bits/stdc++.h>
using namespace std;

int main(){

	// vector<int> s;
	// int n;
	// cin>>n;
	// for (int i = 0; i < n; ++i)
	// {
	// 	int x;
	// 	cin>>x;
	// 	s.push_back(x);
	// }
	// int l;
	// cin>>l;
	// sort(s.begin()+3,s.end());	
	// for(auto &ve:s){
	// 	cout<<ve <<" ";
	// }
//for arrays
	int n;
	cin>>n;
	int s[n];
	for (int i = 0; i < n; ++i)
	{
		
		cin>>s[i];
		
	}
	
	sort(s+2,s+n);	//sort(starting address for sort , upto next address of end) 
	for(auto &ve:s){
		cout<<ve <<" ";
	}
}