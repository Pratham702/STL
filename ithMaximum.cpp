#include <bits/stdc++.h>
using namespace std;

int main(){

	multiset<int> s;
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin>>x;
		s.insert(x);
	}
	stack<int> st;
	for(auto &sta:s){
		st.push(sta);
	}
	int p;
	cin>>p;
	for (int i = 1; i <p ; ++i)
	{
		st.pop();
	}
	cout<<st.top()<<endl;
}