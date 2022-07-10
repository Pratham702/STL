#include<bits/stdc++.h>
using namespace std;
string balancedParanthesis(string s){

stack<char> str;
    unordered_map<char,int> sym={{'[',-1},{'(',-2},{'{',-3},{']',1},{')',2},{'}',3}};

	for(char &bracket:s ){
       if (sym[bracket]<0)		
       {
        str.push(bracket);
       }
       else {
       	if (str.empty())
       	{
               return "no";    
	}
	 char top=str.top();
       		str.pop();
       	if ((sym[bracket]+sym[top])!=0)
       	{
       		   return "no";
       	}
       }
	}
	if (str.empty())
	{
		  return "yes";
	}
	else
		 return "no";
               
}
int main(){
	string s;
	cin>>s;
	cout<<balancedParanthesis(s);
	}